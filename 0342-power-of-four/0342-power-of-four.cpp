class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        long long val=1;
        while(val<n){
            val*=4;
        }
        return val==n;
    }
};