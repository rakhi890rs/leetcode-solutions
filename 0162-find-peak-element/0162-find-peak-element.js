/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
    let f=0,l=nums.length-1;
    while(f<l){
        let mid=Math.floor(f+(l-f)/2);
        if(nums[mid]<=nums[mid+1]){
            f=mid+1;
        }else{
            l=mid;
        }
    }
    return l;
};