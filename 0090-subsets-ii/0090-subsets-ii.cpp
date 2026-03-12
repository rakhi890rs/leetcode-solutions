class Solution {
public:
    void solve(vector<int>&nums,int index,vector<int>&curr,vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        solve(nums,index+1,curr,ans);
        curr.pop_back();
        while(index+1<nums.size() && nums[index]==nums[index+1]){
            index++;
        }
        solve(nums,index+1,curr,ans);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>curr;
        vector<vector<int>>ans;
        solve(nums,0,curr,ans);
        return ans;

    }
};