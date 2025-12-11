class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //first 
        int n=nums.size(); 
        int start=0,end=n-1;
        int first=-1,last=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        //last
        start=0,end=n-1;
        while(start<=end){
             int mid=start+(end-start)/2;
             if(nums[mid]==target){
                last=mid;
                start=mid+1;
             }else if(nums[mid]>target){
                end=mid-1;
             }else{
                start=mid+1;
             }
        }
        vector<int>ans(2);
        ans[0]=first;
        ans[1]=last;
        return ans;
    }
};