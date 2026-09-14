class Solution {
public:
    long long nCr(int n,int r){
        long long ans=1;
        for(int i=1;i<=r;i++){
            ans=ans*(n-i+1)/i;
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int n=0;n<numRows;n++){
            vector<int>row;
            for(int r=0;r<=n;r++){
                row.push_back(nCr(n,r));
            }
            ans.push_back(row);
        }
        return ans;
    }
};