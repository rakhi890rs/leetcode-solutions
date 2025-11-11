/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var binary=function(nums,target,isStart){
    let first =0,last=nums.length-1,ans=-1;
    while(first<=last){
        let mid=Math.floor(first+(last-first)/2);
        if(nums[mid]==target){
            ans=mid;
            if(isStart) last=mid-1;
            else first =mid+1;
    }
        else if(nums[mid]<target) first=mid+1;
        else last=mid-1;
    }
      return ans;
} 
var searchRange = function(nums, target) {
    let start = binary(nums,target,true)
    let end=binary(nums,target,false)
    return [start,end];
   
};