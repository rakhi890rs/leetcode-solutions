class Solution {
public:
    bool judgeCircle(string moves) {
        int count=0;
        int count2=0;
        for(char ch: moves){
            if(ch=='U') count++;
            else if(ch=='D') count--;
            else if(ch=='L') count2++;
            else if(ch=='R') count2--;
        }
        return count==0 && count2==0;
    }
};