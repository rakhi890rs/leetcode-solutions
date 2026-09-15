class Solution {
public:
    bool isPalin(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
   int maxPalindromes(string s, int k) {
    int n = s.length();
    int ans = 0;
    int r = k - 1;
    while (r < n) {
        if (isPalin(s, r - k + 1, r)) {
            ans++;
            r = r + k;
        } else if (r + 1 < n && isPalin(s, r - k + 1, r + 1)) {   
            ans++;
            r = r + k + 1;
        } else r++;
    }
    return ans;
}
};