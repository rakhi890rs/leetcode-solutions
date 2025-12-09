class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        
        for (int c = 1; c <= n; c++) {
            int c2 = c * c;
            int a = 1, b = n;
            while (a <= b) {                    
                int sum = a*a + b*b;
                if (sum == c2) {
                    ans++;                       
                    if (a != b) ans++;          
                    a++;
                    b--;
                }
                else if (sum > c2) {
                    b--;                         
                } 
                else {
                    a++;                         
                }
            }
        }
        return ans;
    }
};
