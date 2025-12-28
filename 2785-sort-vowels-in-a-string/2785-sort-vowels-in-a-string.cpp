class Solution {
public:
    string sortVowels(string s) {
        
        vector<int> alpha(59, 0);
        for(int i=0;i<s.size();i++) {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
            s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            alpha[s[i]-'A']++; 
            s[i]='#';
            }
        }
        string vow;
        for(int i=0;i<59;i++){
            char c='A'+i;
            while(alpha[i]--){
                vow+=c;
            }
        }
        int first=0,second=0;
        while(second<vow.size()){
            if(s[first]=='#'){
                s[first]=vow[second];
                second++;
            }
            first++;
        }
        return s;

    }
};