class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        long long value = 1;
        while (value < n) {
            value *= 2;
        }
        return value == n;
    }
};
