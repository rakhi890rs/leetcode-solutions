class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0 ||(n%3!=0 and n!=1)) return false;
        return solve(n);
    }
    bool solve(int n){
        if(n==1) return true;
        int rem= n%3;
        if(rem==0){
            return solve(n/3);
        }else{
            return false;
        }
    }
};