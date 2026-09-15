class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-1;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-1;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int x=j+1;
                int y=n-1;
                long long target2=(long long)target-(nums[i]+nums[j]);
                while(x<y){
                    if(nums[x]+nums[y]==target2){
                        ans.push_back({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    
                    while(x<y && nums[x]==nums[x-1]) x++;
                    while(x<y && nums[y]==nums[y+1]) y--;
                    }
                else if(nums[x]+nums[y]>target2) y--;
                else x++;
                }
            }
        }
        return ans;
    }
};