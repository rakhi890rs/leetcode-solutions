class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>freq(256,0);
       int n=s.size();
       int start=0;
       int maxLen=0;
       for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[start]]--;
                start++;
            }
            maxLen=max(maxLen,i-start+1);
       }
       return maxLen;
    }
};