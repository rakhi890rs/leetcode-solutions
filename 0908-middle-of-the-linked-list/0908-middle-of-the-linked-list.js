var middleNode = function(head) {
    // Brute-force solution: count first, then traverse
    let count = 0;
    let curr = head;
    while(curr){
        count++;
        curr = curr.next;
    }

    let midIndex = Math.floor(count / 2);
    curr = head;
    for(let i = 0; i < midIndex; i++){
        curr = curr.next;
    }

    return curr;
};
