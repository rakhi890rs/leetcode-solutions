class Solution {
public:
    bool valid(int i, int j, int r, int c){
        return i >= 0 && i < r && j >= 0 && j < c;
    }
    void solve(vector<vector<char>>& board) {
        int r = board.size();
        int c = board[0].size();
        queue<pair<int,int>> q;
        int row[4] = {-1, 1, 0, 0};
        int col[4] = {0, 0, -1, 1};
        // Step 1: Push boundary O's
        for(int j = 0; j < c; j++){
            if(board[0][j] == 'O'){
                q.push({0, j});
                board[0][j] = '#';
            }
            if(board[r-1][j] == 'O'){
                q.push({r-1, j});
                board[r-1][j] = '#';
            }
        }
        for(int i = 0; i < r; i++){
            if(board[i][0] == 'O'){
                q.push({i, 0});
                board[i][0] = '#';
            }
            if(board[i][c-1] == 'O'){
                q.push({i, c-1});
                board[i][c-1] = '#';
            }
        }
        // Step 2: BFS
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int k = 0; k < 4; k++){
                int nx = x + row[k];
                int ny = y + col[k];
                if(valid(nx, ny, r, c) && board[nx][ny] == 'O'){
                    board[nx][ny] = '#';
                    q.push({nx, ny});
                }
            }
        }
        // Step 3: Final conversion
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                else if(board[i][j] == '#') board[i][j] = 'O';
            }
        }
    }
};