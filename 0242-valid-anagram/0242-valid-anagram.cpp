class Solution {
public:
    bool isAnagram(string s, string t) {
       int freq[123]={0};
       if(s.length()!=t.length()){
        return false;
       }else{
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            freq[int(ch)]++;
        }
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            freq[int(ch)]--;
        }
        for(int i=0;i<123;i++){
            if(freq[i]!=0){
                return false;
            }
        }
       }
       return true;

    }
};