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
    ListNode* sortList(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        ListNode* tail = dummy;
        vector<int>ans;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
       sort(ans.begin(), ans.end());
        int n=ans.size();
        for(int i=0;i<n;i++){
            ListNode* curr=new ListNode(ans[i]);
            tail->next = curr;
            tail = curr;
        }
        return dummy->next;
    }
};