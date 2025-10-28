/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
 */
var reorderList = function(head) {
    let slow=head;
    let fast=head;
    while(fast && fast.next){
        fast=fast.next.next;
        slow=slow.next;
    }
    let prev=null;
    while(slow){
        let temp=slow.next;
        slow.next=prev;
        prev=slow;
        slow=temp;
    }
    let first=head;
    let second=prev;
    while(second.next){
        t1=first.next;
        t2=second.next;
        first.next=second;
        second.next=t1;
        first=t1;
        second=t2;
    }

};