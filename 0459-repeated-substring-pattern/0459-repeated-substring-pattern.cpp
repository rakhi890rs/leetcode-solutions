class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s+s;
        string s3="";
        for(int i=1;i<s2.length()-1;i++){
            s3.push_back(s2[i]);
        }
        if(s3.find(s)!=string::npos){
            return true;
        }
        return false;
    }
};