/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=arr[st.top()];
            }
            st.push(i);
        }
        return ans;
    }
};