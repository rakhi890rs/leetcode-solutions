#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.assign(n, {});
        for (auto &e : connections) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        disc.assign(n, -1);
        low.assign(n, -1);
        timeDfs = 0;
        res.clear();

        // run DFS from every node (graph might be connected but safe to loop)
        for (int i = 0; i < n; ++i) {
            if (disc[i] == -1) dfs(i, -1);
        }
        return res;
    }

private:
    vector<vector<int>> adj;
    vector<int> disc, low;
    int timeDfs;
    vector<vector<int>> res;

    void dfs(int u, int parent) {
        disc[u] = low[u] = timeDfs++;
        for (int v : adj[u]) {
            if (v == parent) continue;         // ignore the edge back to parent
            if (disc[v] == -1) {
                dfs(v, u);
                low[u] = min(low[u], low[v]);
                if (low[v] > disc[u]) {
                    // u - v is a bridge
                    res.push_back({u, v});
                }
            } else {
                // back edge
                low[u] = min(low[u], disc[v]);
            }
        }
    }
};
