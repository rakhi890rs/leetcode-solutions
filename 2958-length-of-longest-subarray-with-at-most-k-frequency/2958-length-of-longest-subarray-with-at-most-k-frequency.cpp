class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int start=0,end=0,len=0;
        while(end<nums.size()){
            freq[nums[end]]++;
            while(freq[nums[end]]>k){
                freq[nums[start]]--;
                start++;
            }
            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
};