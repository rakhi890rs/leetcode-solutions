class Solution {
public:
    string capitalizeTitle(string title) {
        string word;
        string result="";
        stringstream ss(title);
        while(ss>>word){
            int len=word.size();
            
            if(len<=2){
                for(int i=0;i<len;i++){
                    word[i]=tolower(word[i]);
                }
                result+=word+" ";
            }else{
                word[0]=toupper(word[0]);
            for(int i=1;i<len;i++){
                word[i]=tolower(word[i]);
            }
            result+=word+" "; }
           }
           if (!result.empty()) result.pop_back();
           return result;}
};