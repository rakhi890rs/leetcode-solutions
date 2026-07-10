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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* first=head,* second=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        for(int i=1;i<k;i++){
            first=first->next;
        }
        int x=count-k+1;
        for(int i=1;i<x;i++){
            second=second->next;
        }
        swap(first->val,second->val);
        return head;
    }
};