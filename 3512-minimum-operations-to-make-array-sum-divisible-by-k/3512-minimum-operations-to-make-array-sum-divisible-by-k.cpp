class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        int ans;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=sum%k;
        }
        return ans;
    }
};