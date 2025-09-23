class Solution {
public:
    int firstUniqChar(string s) {
        int freq[123]={0};
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            freq[int(ch)]++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[int(s[i])]==1){
                return i;
            }
        }
        return -1;
    }
};