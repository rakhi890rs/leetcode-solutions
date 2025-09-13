/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let reverse=0;
    let n=x;
    while(n>0){
        let digit=n%10;
        reverse=reverse*10+digit;
        n=Math.floor(n/10);
    }
    if(x===reverse){
        return true;
    }
    return false;
};