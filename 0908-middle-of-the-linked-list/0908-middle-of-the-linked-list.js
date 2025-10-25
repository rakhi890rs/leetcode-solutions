var middleNode = function(head) {
    let count=0;
    let curr=head;
    while(curr){
        count++;
        curr=curr.next;
    }
    curr=head;
    for(let i=0;i<Math.floor(count/2);i++){
        curr=curr.next;
    }
    return curr;
};
