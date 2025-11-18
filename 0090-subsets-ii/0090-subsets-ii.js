/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var solve=function(nums,ans,curr,i){
    if(i==nums.length){
        ans.push([...curr])
        return;
    }
    curr.push(nums[i]);
    solve(nums,ans,curr,i+1);
    curr.pop();
    while(i+1<nums.length && nums[i]==nums[i+1]){
        i++;
    }
    solve(nums,ans,curr,i+1);
}
var subsetsWithDup = function(nums) {
    nums.sort((a,b)=>a-b); 
    let ans=[];
    let curr=[];
    solve(nums,ans,curr,0);
   return ans;
};