/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, left, right) {
    if(head==null || head.next==null || right==left)return head;
    let curr=head;
    let prev=null;
    let i=1;
   while(curr!=null && i!=left){
    prev=curr;
    curr=curr.next;
    i++;
   }
    let toStart=prev;
    let start=curr;
    prev=null;
    while(curr!=null && i!=right+1){
        let temp=curr.next;
        curr.next=prev;
        prev=curr;
        curr=temp
        i++;
    }
    start.next=curr;
    if(toStart!=null){
        toStart.next=prev;
    }else{
        return prev;
    }
    return head;
};