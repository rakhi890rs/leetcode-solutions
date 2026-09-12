class Solution {
public:

    bool better(pair<long long, vector<int>>& a,
                pair<long long, vector<int>>& b) {

        if (a.first != b.first)
            return a.first > b.first;

        return a.second < b.second;
    }

    vector<int> maximumWeight(vector<vector<int>>& intervals) {

        int n = intervals.size();

        // start, end, weight, original index
        vector<vector<int>> a;

        for (int i = 0; i < n; i++) {
            a.push_back({
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            });
        }

        sort(a.begin(), a.end());

        // next[i] = first interval whose start > a[i][1]
        vector<int> next(n);

        for (int i = 0; i < n; i++) {

            int left = i + 1;
            int right = n;

            while (left < right) {

                int mid = left + (right - left) / 2;

                if (a[mid][0] > a[i][1])
                    right = mid;
                else
                    left = mid + 1;
            }

            next[i] = left;
        }

        // dp[i][k]
        // best score + indices from i onward
        // choosing at most k intervals
        vector<vector<pair<long long, vector<int>>>> dp(
            n + 1,
            vector<pair<long long, vector<int>>>(5)
        );

        for (int i = n - 1; i >= 0; i--) {

            for (int k = 1; k <= 4; k++) {

                // Skip
                auto skip = dp[i + 1][k];

                // Take
                auto take = dp[next[i]][k - 1];

                take.first += a[i][2];

                take.second.push_back(a[i][3]);

                sort(take.second.begin(), take.second.end());

                if (better(take, skip))
                    dp[i][k] = take;
                else
                    dp[i][k] = skip;
            }
        }

        return dp[0][4].second;
    }
};