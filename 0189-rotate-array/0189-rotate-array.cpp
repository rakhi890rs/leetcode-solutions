class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans(nums.size());
        k=k%nums.size();
        for(int i=0;i<k;i++){
            ans[i]=nums[nums.size()-k+i];
        }
        for(int i=0;i<nums.size()-k;i++){
            ans[i+k]=nums[i];
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
    }
};