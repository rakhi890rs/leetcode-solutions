/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.toLowerCase().replace(/[^a-z0-9]/g, "");
    let rev="";
    for(let i=s.length-1;i>=0;i--){
        rev=rev+s[i];
    }
    if(rev===s){
        return true;
    }
    return false;

};