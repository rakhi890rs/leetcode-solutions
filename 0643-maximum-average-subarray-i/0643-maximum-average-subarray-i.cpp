class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int msum;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        msum=sum;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            msum=max(msum,sum);
        }
        return (double)msum/k;

    }
};