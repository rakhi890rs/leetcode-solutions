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
        vector<int> temp(nums.size());
        int lo=0, hi=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                temp[i]=nums[hi--];
            }else{
                temp[i]=nums[lo++];
            }
        }
        nums=temp;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans+=1ll * nums[i]*nums[i];
            }else{
                ans-= 1ll * nums[i]*nums[i];
            }
        }
        return ans;

    }
};