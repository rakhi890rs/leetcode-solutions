class Solution {
public:
 int robber(int i,vector<int>&nums,vector<int>&dp){
        if(i==0) return nums[0];
        if(i==1) return max(nums[0],nums[1]);
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+robber(i-2,nums,dp),robber(i-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 1)
         return nums[0];
        vector<int>ans;
        vector<int>ans2;
       for(int i=1;i<n;i++){
        ans.push_back(nums[i]);
       }
        for(int i=0;i<n-1;i++){
        ans2.push_back(nums[i]);
       }
        vector<int>dp1(ans.size(), -1);
        vector<int>dp2(ans2.size(), -1);
        return max(robber(ans.size()-1, ans, dp1),
           robber(ans2.size()-1, ans2, dp2));
    }
};