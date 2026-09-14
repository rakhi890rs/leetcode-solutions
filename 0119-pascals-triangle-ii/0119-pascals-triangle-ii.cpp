class Solution {
public:
    long long nCr(int n, int r){
        long long ans=1;
        for(int i=1;i<=r;i++){
            ans=ans*(n-i+1)/i;
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
        vector<int>row;
        for(int i=0;i<=rowIndex;i++){    
            row.push_back(nCr(rowIndex,i));
        }
        return row;
    }
};