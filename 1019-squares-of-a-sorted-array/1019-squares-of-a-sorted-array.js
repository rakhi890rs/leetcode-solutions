/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    // nums.sort((a,b)=>a-b);
    let arr=nums.map(nums=>nums*nums);
    return arr.sort((a,b)=>a-b);

    
};