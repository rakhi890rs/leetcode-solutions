class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> path(n, string(n, '.'));
        solve(0, n, path, ans);
        return ans;

    }
    void solve(int row, int n, vector<string>& path, vector<vector<string>>& ans){

        if(row==n){
            ans.push_back(path);
            return;
        }
        for(int col=0;col<n;col++){
            if(isValid(row,col,path,n)){
                path[row][col]='Q';
                solve(row+1,n,path,ans);
                path[row][col]='.';//backtrack
            }
        }
    }
    bool isValid(int row,int col,vector<string>&path,int n){
        //row
        for(int j=0;j<n;j++){
            if(path[row][j]=='Q') return false;
        }
        //coloum
        for(int i=0;i<n;i++){
            if(path[i][col]=='Q') return false;
        }
        //upper left diagonal
        int i=row-1,j=col-1;
        while(i>=0 && j>=0){
            if(path[i][j]=='Q') return false;
            i--;
            j--;
        }
        // upper right diagonal
        i=row-1;j=col+1;
        while(i>=0 && j<n){
            if(path[i][j]=='Q')return false;
            i--;
            j++;
        }
        return true;
    }
};