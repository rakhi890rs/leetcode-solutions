/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function(nums) {
    let sum=0;
    let n=nums.length;
    let digitsum=0;
    for(let i=0;i<n;i++){
        sum+=nums[i]; }
    for(let i=0;i<n;i++){
        let x=nums[i];
        while(x>0){
            let digit=x%10;
            digitsum+=digit;
            x=Math.floor(x/10);
            }
    } 
    return sum-digitsum;

};