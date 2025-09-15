/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let f=-1,l=-1;
    for(let i=0;i<nums.length;i++){
        if(nums[i]===target){
            if(f==-1)f=i;
            l=i;
        }
    }
    return [f,l];
};