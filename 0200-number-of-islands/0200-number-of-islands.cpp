class Solution {
public:
    bool valid(int i, int j,int r ,int c){
        return i>=0 && i<r && j>=0 && j<c;
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int row[4] = {-1, 1, 0, 0};
        int col[4] = {0, 0, -1, 1};
        queue<pair<int,int>>q;
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push({i,j});
                    grid[i][j]='0';
                    while(!q.empty()){
                        int ni=q.front().first;
                        int nj=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            int newi=ni+row[k];
                            int newj=nj+col[k];
                            if(valid(newi,newj,r,c)&& grid[newi][newj]=='1'){
                                grid[newi][newj]='0';
                                q.push({newi,newj});
                            }
                        }
                    }
                }
            }
        }
            return count;
    }
};