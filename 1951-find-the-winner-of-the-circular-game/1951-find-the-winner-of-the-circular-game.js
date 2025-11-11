/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */

var solve=function(k,arr,i){
    if(arr.length===1)return arr[0];
    i=(i+k)%arr.length
    arr.splice(i,1);
    return solve(k,arr,i);
}
var findTheWinner = function(n, k) {
    let arr=new Array(n);
    for(let i=0;i<n;i++){
        // arr.push(i+1);
        arr[i]=i+1;
    }
    k--;
    return solve(k,arr,0)
};