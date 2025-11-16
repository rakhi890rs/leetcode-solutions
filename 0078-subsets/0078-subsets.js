/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var solve= function(nums,ans,curr,i){
    if(i==nums.length){
        ans.push([...curr]) 
        return;
    }
    curr.push(nums[i])
    solve(nums,ans,curr,i+1);
    curr.pop();
    solve(nums,ans,curr,i+1);
}
var subsets = function(nums) {
    let ans=[];
    let curr=[];
    solve(nums,ans,curr,0);
    return ans;
};