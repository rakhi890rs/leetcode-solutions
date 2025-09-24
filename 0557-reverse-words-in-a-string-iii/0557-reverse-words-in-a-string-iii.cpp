class Solution {
public:
    string reverseWords(string s) {
        string rev="";
        stringstream ss(s);
        string word;
        while(ss>>word){
            for(int i=word.length()-1;i>=0;i--){
                rev+=word[i];
            }
            rev+=" ";
        }
        rev.pop_back();
        return rev;
    }
};