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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* curr=head;
       int count=0;
       while(curr!=NULL){
        count++;
        curr=curr->next;
       }
       if(n==count){
        return head->next;
       }
       int k=count-n;
       ListNode* temp=head;
       for(int i=1;i<k;i++){
            temp=temp->next;
       }
       temp->next=temp->next->next;
       return head;

    }
};