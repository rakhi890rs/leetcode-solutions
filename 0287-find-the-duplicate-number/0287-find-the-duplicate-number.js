/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
  let unique=new Set();
  for (let num of nums){
  if(unique.has(num)){
    return num;
  }
  unique.add(num);
  }
};