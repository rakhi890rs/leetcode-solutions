/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
    let ans=new Array(s.length);
    for(let i=0;i<s.length;i++){
        ans[indices[i]]=s.charAt(i);
    }
    return ans.join("");
};