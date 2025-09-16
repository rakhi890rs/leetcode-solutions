/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let min=prices[0];
    let maxprofit=0;
    for(let i=1;i<prices.length;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        let profit=prices[i]-min;
        maxprofit=Math.max(maxprofit,profit);
    }
    return maxprofit;
    
};