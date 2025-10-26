/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    let curr=head;
    let count=0;
    while(curr!=null){
        count++;
        curr=curr.next;
    }
    let pos=count-n;
    curr=head;
    if(pos==0)return head.next;
    for(let i=0;i<pos-1;i++){
        curr=curr.next;
    }
    if(curr.next!=null){
    curr.next=curr.next.next;}
    return head;
    
};