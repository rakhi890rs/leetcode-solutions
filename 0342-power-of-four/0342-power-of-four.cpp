class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n<=0 || (n%4!=0 and n!=1)) return false;
        return solve(n);
    }
    bool solve(int n){
        if(n==1) return  true;
        int rem = n%4;
        if(rem==0){
            return solve(n/4);
        }else{
            return false;
        }
    }
};