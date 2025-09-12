/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfUnique = function(nums) {
    nums.sort();
    let sum=0;
    for(let i=0;i<nums.length;i++){
        if(nums[i]!==nums[i+1] && nums[i]!==nums[i-1]){
           sum+=nums[i];
        }
       
    }
    return sum;
};