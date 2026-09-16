class Solution {
public:
    bool isVal(string &s,int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.length();
        string ans="";
        int maxlen=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isVal(s,i,j)){
                int len=j-i+1;
                if(len>maxlen){
                    maxlen=len;
                    ans=s.substr(i,len);
                }
                }
            }
        }
        return ans;
    }
};