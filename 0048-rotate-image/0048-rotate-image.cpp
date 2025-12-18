class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // reverse each row
        for(int i=0;i<matrix.size();i++){
            int k=0,j=matrix[0].size()-1;
            while(k<j){
                swap(matrix[i][k],matrix[i][j]);
                k++;
                j--;
            }
        }
    }
};