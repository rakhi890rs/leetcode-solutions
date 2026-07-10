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
    ListNode* removeNodes(ListNode* head) {
        vector<int>arr;
        vector<int>ans;
        ListNode* temp=head;
        ListNode* dummy = new ListNode(0);
        // traverse a linked list and store in a vector
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        int maxi=arr[n-1];
        ans.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--){
           if(arr[i]>=maxi){
            maxi = arr[i];
           ans.push_back(arr[i]);
           }
        }
        reverse(ans.begin(),ans.end());
        ListNode* tail=dummy;
        for(int x:ans) {
                tail->next = new ListNode(x);
                tail = tail->next;
        }
        return dummy->next;
    }
};