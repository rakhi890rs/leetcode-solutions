class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        // adjlist
        vector<vector<int>> adj(n);
        vector<int>indegree(n,0);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        vector<int>ans;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int neigh: adj[node]){
                indegree[neigh]--;
                if(indegree[neigh]==0){
                    q.push(neigh);
                }
            }
        }
        if(ans.size()==n) return ans;
        else return temp;
    }
};