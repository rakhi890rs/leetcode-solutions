class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElem=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxElem=max(maxElem,nums[i]);
        }
        long long total=0;
        int start=0,end=0,count=0;
        while(end<nums.size()){
            if(nums[end]==maxElem){
                count++;
            }
            while(count==k){
                total+=nums.size()-end;
                if(nums[start]==maxElem){
                    count--;
                }start++;
            }
            end++;
        }
        return total;
    }
};