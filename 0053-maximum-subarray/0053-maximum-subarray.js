/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    // Kadane’s Algorithm
    let msum=nums[0];
    let sum=nums[0];
    for(let i=1;i<nums.length;i++){
        sum=Math.max(nums[i],sum+nums[i])
        msum=Math.max(msum,sum);
    }
    return msum;
};