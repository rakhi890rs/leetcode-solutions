/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function(nums, k) {
    let ws=0;
    for(let i=0;i<k;i++){
        ws+=nums[i];
    }
    let ms=ws;
    for(let i=k;i<nums.length;i++){
        ws+=nums[i]-nums[i-k];
        ms=Math.max(ms,ws);
    }
    return ms/k;
};