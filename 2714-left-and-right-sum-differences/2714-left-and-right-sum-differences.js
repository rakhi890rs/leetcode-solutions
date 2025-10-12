/** * @param {number[]} nums 
  * @return {number[]} */

var leftRightDifference = function(nums) {
    let lsum = new Array(nums.length).fill(0)
    let rsum = new Array(nums.length).fill(0)
    let ans = new Array(nums.length)
    
    for (let i = 1; i < nums.length; i++)
        lsum[i] = lsum[i-1] + nums[i-1]

    for (let i = nums.length-2; i >= 0; i--)
        rsum[i] = rsum[i+1] + nums[i+1]

    for (let i = 0; i < nums.length; i++)
        ans[i] = Math.abs(lsum[i] - rsum[i])

    return ans
}
