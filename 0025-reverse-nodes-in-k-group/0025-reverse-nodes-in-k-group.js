/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var reverse= function(start,end){
    let curr=start,prev=null;
    while(curr!=end){
        let temp = curr.next;
        curr.next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
var reverseKGroup = function(head, k) {
    if(head==null || head.next==null || k==1) return head;
    let start=head,end=head;
    for(let i=0;i<k;i++){
        if(end==null)return head;
        end=end.next;
    }
    let newNode = reverse(start,end);
    start.next=reverseKGroup(end,k);
    return newNode;

};