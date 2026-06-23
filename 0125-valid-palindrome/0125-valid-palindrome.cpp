class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for(char ch:s){
            if(ch!=' ' and isalnum(ch)){
                s2+=tolower(ch);
            }
        }
        int i=0;
        int j=s2.size()-1;
        bool palindrome=true;
        while(i<j){
            if(s2[i]!=s2[j]) {
                return false;
            }  
            i++;
            j--;
        }
       return true;
    }
};