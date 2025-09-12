/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function(matrix) {
    let ans = Array.from({length: matrix[0].length},()=>Array(matrix.length))
    for(let i=0;i<ans.length;i++){
        for(let j=0;j<ans[i].length;j++){
            ans[i][j]=matrix[j][i];
        }
    }
    return ans
};