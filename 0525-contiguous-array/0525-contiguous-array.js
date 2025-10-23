/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxLength = function(nums) {
    for(let i=0;i<nums.length;i++){
        if(nums[i]==0) nums[i]=-1;
    }
    let k=0,sum=0,longest=0;
    let map =new Map();
    map.set(sum,-1);
    for(let i=0;i<nums.length;i++){
        sum+=nums[i];
        if(map.has(sum-k)){
            longest=Math.max(longest,i-map.get(sum-k))
        }
        if(!map.has(sum))map.set(sum,i);
    }
    return longest;
};