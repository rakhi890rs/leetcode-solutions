class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        int count=0;
        while(ss>>word){
            count++;
        }
        return word.length();
    }
};