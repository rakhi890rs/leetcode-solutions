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
    ListNode* reverse(ListNode* start,ListNode*end){
        ListNode* curr=start;
        ListNode* prev=NULL;
        while(curr!=end){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==1) return head;
        ListNode* start=head;
        ListNode* end=head;
        for(int i=0;i<k;i++){
            if(end==NULL) return head;
            end=end->next;
        }
        ListNode* newNode = reverse(start,end);
        start->next=reverseKGroup(end,k);
        return newNode;
    }
};