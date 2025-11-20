class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int sum=0;
       int l=0;
       int minL=INT_MAX;;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        while(sum>=target){
            minL=min(minL,i-l+1);
            sum-=nums[l];
            l++;
        }     
    }
   return (minL == INT_MAX) ? 0 : minL;
    }
};