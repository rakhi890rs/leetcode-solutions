class Solution {
public:

    long long countCommas(long long n) {

        long long ans = 0;

        // 1 to 999 -> 0 commas
        if (n < 1000)
            return 0;

        // 1000 to 999999 -> 1 comma
        else if (n < 1000000) {
            ans = n - 1000 + 1;
            return ans;
        }

        // 1000000 to 999999999 -> 2 commas
        else if (n < 1000000000) {
            ans = 999000;
            ans += 2 * (n - 1000000 + 1);
            return ans;
        }

        // 1000000000 to 999999999999 -> 3 commas
        else if (n < 1000000000000LL) {
            ans = 999000;
            ans += 2 * 999000000;
            ans += 3 * (n - 1000000000 + 1);
            return ans;
        }

        // 1000000000000 to 999999999999999 -> 4 commas
        else if (n < 1000000000000000LL) {
            ans = 999000;
            ans += 2 * 999000000;
            ans += 3 * 999000000000LL;
            ans += 4 * (n - 1000000000000LL + 1);
            return ans;
        }

        // 1000000000000000 and above -> 5 commas
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