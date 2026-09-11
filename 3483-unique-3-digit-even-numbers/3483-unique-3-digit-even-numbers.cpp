class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(nums[i]==0) continue;
                    if(i==j || j==k || k==i) continue;
                    if(nums[k]%2==0){
                        int num=nums[i]*100+nums[j]*10+nums[k];
                        st.insert(num);
                    }
                }
            }
        }
        return st.size();
    }
};