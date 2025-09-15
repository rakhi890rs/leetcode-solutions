/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    k = k % nums.length;
    let ans=[];
    let m=0;
    for(let i=nums.length-k;i<nums.length;i++){
        ans[m++]=nums[i];
    }
    for(let i=0;i<nums.length-k;i++){
        ans[m++]=nums[i];
    }
    for(let i=0;i<nums.length;i++){
        nums[i]=ans[i];
    }
    
};