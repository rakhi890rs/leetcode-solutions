class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        bool ans = solve(board);
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(isValid(i,j,ch,board)){
                            board[i][j]=ch;
                            if(solve(board)) return true;
                            board[i][j]='.';
                        }
                    }
                return false;
                }
            }
        }
        return true;
    }
    bool isValid(int row,int col,char ch,vector<vector<char>>& board){
        //row
        for(int i=0;i<9;i++){
            if(board[row][i]==ch)
                return false;
        }
        // col
        for(int i=0;i<9;i++){
            if(board[i][col]==ch)
                return false;
        }
        int nr=(row/3)*3, nc=(col/3)*3;
        for(int i=nr;i<nr+3;i++){
            for(int j=nc;j<nc+3;j++){
                if(board[i][j]==ch)
                    return false;
            }
        }
        return true;


        
    }
};