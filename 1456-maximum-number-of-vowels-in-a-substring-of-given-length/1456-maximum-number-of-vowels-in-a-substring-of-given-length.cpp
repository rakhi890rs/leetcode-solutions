class Solution {
public:
    bool isVow(char c){
        return c=='a'||c=='e'|| c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int window=0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(isVow(s[i])) window++;
        }
        ans=window;
        for(int i=k;i<n;i++){
            if(isVow(s[i-k])) window--;
            if(isVow(s[i])) window++;
            ans=max(ans,window);
        }
    
    return ans;
}
};