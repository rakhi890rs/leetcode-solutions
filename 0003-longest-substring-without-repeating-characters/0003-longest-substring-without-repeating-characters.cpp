class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);
        int right, left=0;
        int maxlen=0;
        for(right=0;right<s.size();right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};