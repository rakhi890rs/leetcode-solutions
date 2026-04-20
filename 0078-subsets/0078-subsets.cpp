class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int i=0;
        vector<int>temp;
        solve(i,temp,ans,nums);
        return ans;

    }
    void solve(int i,vector<int>temp,vector<vector<int>>&ans,vector<int>& nums){
        if(i==nums.size()) {
            ans.push_back(temp);
            return; 
            }
            //exclude
            solve(i+1,temp,ans,nums);
            //include
            temp.push_back(nums[i]);
            solve(i+1,temp,ans,nums);


    }
};