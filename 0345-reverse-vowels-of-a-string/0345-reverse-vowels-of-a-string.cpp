class Solution {
public:
    string reverseVowels(string s) {
       string vow="aeiouAEIOU";
       int i=0,j=s.length()-1;
       while(i<j){   
        if (vow.find(s[i]) != string::npos &&
   vow.find(s[j]) != string::npos){
         swap(s[i],s[j]); 
        i++;
        j--;
       }else if(vow.find(s[i])==string::npos)i++;
       else if(vow.find(s[j])==string::npos)j--;
    }
    return s;
    }
};