/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var solve = function(nums,ans,i){
    if(i==nums.length){
        ans.push([...nums]);
        return;
    }
    for(let j=i;j<nums.length;j++){
        [nums[i],nums[j]]=[nums[j],nums[i]]
        solve(nums,ans,i+1);
        [nums[i],nums[j]]=[nums[j],nums[i]];
    }
    
}
var permute = function(nums) {
    let ans=[];
    solve(nums,ans,0);
    return ans;
};