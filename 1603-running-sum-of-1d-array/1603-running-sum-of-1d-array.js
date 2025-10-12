/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    // let sum=0;
    let ans=new Array();
     ans[0]=nums[0];
    for(let i=1;i<nums.length;i++){
        ans[i]=ans[i-1]+nums[i];
    }
    return ans;
};