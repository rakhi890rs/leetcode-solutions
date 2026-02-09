class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());  
        // int first = *v.begin()+3;
        if(s.size()<3){
            return *s.rbegin();
        }
        auto it = s.rbegin();
        for(int i=0;i<2;i++){
            it++;
        }
        return *it;                   
    }
};
