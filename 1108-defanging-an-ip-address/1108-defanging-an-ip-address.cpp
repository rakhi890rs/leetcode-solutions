class Solution {
public:
    string defangIPaddr(string command) {     
       int i=0;
       string ans;
       while(i<command.length()){
        if(command[i]=='.'){
            ans+="[.]";
        }else{
            ans+=command[i];
        }
        i++;
       }
       return ans;
    }
};
