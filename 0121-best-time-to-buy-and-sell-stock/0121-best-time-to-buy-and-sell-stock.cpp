class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>suffix(n);
        suffix[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(prices[i],suffix[i+1]);
        }
        int profit=0;
        for(int i=0;i<n-1;i++){
            profit=max(profit,suffix[i+1]-prices[i]);
        }
        return profit;
    }
};