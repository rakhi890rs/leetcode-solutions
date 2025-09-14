/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    let max = -Infinity, smax = -Infinity, tmax = -Infinity;

    for (let num of nums) {
        if (num === max || num === smax || num === tmax) continue;

        if (num > max) {
            tmax = smax;
            smax = max;
            max = num;
        } else if (num > smax) {
            tmax = smax;
            smax = num;
        } else if (num > tmax) {
            tmax = num;
        }
    }

    return tmax === -Infinity ? max : tmax;
};
