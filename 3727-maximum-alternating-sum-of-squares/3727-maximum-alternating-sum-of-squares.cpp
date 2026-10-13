class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
      long long ans=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            nums[i]=nums[i]*-1;
        }
      }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i < nums.size()/2){
                ans-= 1ll * nums[i]*nums[i];
            }else{
                ans+= 1ll * nums[i]*nums[i];
            }
        }
        return ans;

    }
};