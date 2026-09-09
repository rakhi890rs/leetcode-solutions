class Solution {
public:

    long long countCommas(long long n) {
        long long ans = 0;
        if (n < 1000)return 0;
        else if (n < 1000000) {
            ans = n - 1000 + 1;
            return ans;
        }
        else if (n < 1000000000) {
            ans = 999000;
            ans += 2 * (n - 1000000 + 1);
            return ans;
        }
        else if (n < 1000000000000LL) {
            ans = 999000;
            ans += 2 * 999000000;
            ans += 3 * (n - 1000000000 + 1);
            return ans;
        }
        else if (n < 1000000000000000LL) {
            ans = 999000;
            ans += 2 * 999000000;
            ans += 3 * 999000000000LL;
            ans += 4 * (n - 1000000000000LL + 1);
            return ans;
        }
        else {
            ans = 999000;
            ans += 2 * 999000000;
            ans += 3 * 999000000000LL;
            ans += 4 * 999000000000000LL;
            ans += 5 * (n - 1000000000000000LL + 1);
            return ans;
        }
    }
};