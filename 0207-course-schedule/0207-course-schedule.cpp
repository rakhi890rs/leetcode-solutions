class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        // build graph
        for(auto &p : prerequisites){
            int u = p[1];
            int v = p[0];
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int> q;
        // push nodes with 0 indegree
        for(int i = 0; i < numCourses; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            for(int neigh : adj[node]){
                indegree[neigh]--;
                if(indegree[neigh] == 0){
                    q.push(neigh);
                }
            }
        }
        return count == numCourses;
    }
};