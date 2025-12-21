class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int count=0;
        bool odd=0;
        vector<int>freq(256,0);
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        for(int i=0;i<256;i++){
            if(freq[i]%2==0){
                count+=freq[i];
            }else{
                count+=freq[i]-1;
                odd=1;
            }
        }
        return count+odd;
    }
};