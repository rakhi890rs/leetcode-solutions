class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // adj list;
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<times.size();i++){
        int u=times[i][0];
        int v=times[i][1];
        int wt=times[i][2];
        adj[u].push_back({v,wt});
    }
    vector<int>dist(n+1,INT_MAX);
    vector<bool>explored(n+1,false);
    priority_queue< pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[k]=0;
    pq.push({0,k});
    while(!pq.empty()){
        int node=pq.top().second;
        pq.pop();
        if(explored[node]) continue;
        explored[node]=true;
        for(auto it:adj[node]){
            int neigh=it.first;
            int wt=it.second;
            // relax the edge
            if(!explored[neigh] && dist[node]+wt<dist[neigh]){
                dist[neigh]=dist[node]+wt;
                pq.push({dist[neigh],neigh});
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(dist[i]==INT_MAX) return -1;
        ans=max(ans,dist[i]);
    }
    return ans;
    }
};