/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumCount = function(nums) {
    let i=0,j=nums.length-1;
    let poscount=0;
    while(i<=j){
        let mid=Math.floor(i+(j-i)/2);
        if(nums[mid]<0){
            i=mid+1;
        }else{
            j=mid-1;
        }}
        let negCount = i;
        i = 0;
        j = nums.length - 1;
    while(i<=j){
            let mid=Math.floor(i+(j-i)/2);
        if(nums[mid]>0){
            j=mid-1;
        }else{
            i=mid+1;
        }
        }
        let posCount = nums.length - i;
        return Math.max(posCount,negCount);

};