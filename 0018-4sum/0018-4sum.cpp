class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int x=j+1;
                int y=nums.size()-1;
                while(x<y){
                    long long need=(long long)target-(nums[i]+nums[j]);
                    if(nums[x]+nums[y]==need){
                        ans.push_back({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                        while(x<y && nums[x]==nums[x-1])x++;
                        while(x<y && nums[y]==nums[y+1])y--;
                    }
                    else if(nums[x]+nums[y]>need)y--;
                    else x++;
                }
            }
        }
        return ans;
    }
};