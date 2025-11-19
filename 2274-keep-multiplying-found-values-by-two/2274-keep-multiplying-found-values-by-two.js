/**
 * @param {number[]} nums
 * @param {number} original
 * @return {number}
 */
var findFinalValue = function(nums, original) {
    let found=true;
    while(found){
        found=false;
        for(let i=0;i<nums.length;i++){
            if(nums[i]==original){
                original*=2;
                found=true;
                break;
            }
        }
    }return original;
};