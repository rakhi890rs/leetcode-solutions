class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        int count=0;
        while(j<nums.size()){
             if(i == j) {
                j++;
                continue;
            }
            if((nums[j]-nums[i])==k){
                count++;
                // dublicates value
                int x = nums[i];
                int y = nums[j];
                i++;
                j++;
                while(i<nums.size() && nums[i]==x)i++;
                while(j<nums.size()&&nums[j] == y)j++;
            }else if(nums[j]-nums[i]<k){
                j++;
            }else i++;
        }
        return count;
    }
};