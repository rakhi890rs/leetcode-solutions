class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(true){
            int sum=0;
            int temp = n;
            while(temp>0){
                int rem=temp%10;
                sum=sum+(rem*rem);
                temp/=10;
            }
            if(sum==1) return true;
            if(s.count(sum)) return false;
            s.insert(sum);
            n=sum;
        }
        return false;
    }
};