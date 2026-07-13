class Solution {
public:
    bool solve(int n,vector<int>& nums, int sum, vector<vector<int>>& dp){
        if(sum==0) return 1;
        if(n==0) return 0;
        if (dp[n][sum] != -1)
            return dp[n][sum];
        if(nums[n-1]>sum) return dp[n][sum]=solve(n-1,nums,sum,dp);
        return dp[n][sum]=solve(n-1,nums,sum-nums[n-1],dp)||solve(n-1,nums,sum,dp);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
         for (int x : nums)
            sum += x;
        if (sum % 2 != 0) return false;
        int target = sum / 2;
        vector<vector<int>> dp(n +1,vector<int>(target+1,-1));
        return solve(n,nums,target,dp);
    }
};