/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let f=0,l=nums.length-1;
    while(f<=l){
        let m=Math.floor(f+(l-f)/2);
        if(nums[m]===target)return m;
        if(nums[f]<=nums[m]){
            if(nums[f]<=target && target<=nums[m]){
                l=m;
            }else f=m+1;
        }else{
            if(nums[m+1]<=target && target<=nums[l]){
                f=m+1;
            }else l=m;
        }
    }
    return -1;
};