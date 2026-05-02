/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<vector<int>>ans;
        vector<int>path;
        solve(root,targetSum,ans,sum,path);
        return ans;
    }
    void solve(TreeNode* root, int targetSum, vector<vector<int>>&ans,int sum, vector<int>path){
        if(!root) return;
        sum+=root->val;
        path.push_back(root->val);
        if(!root->left && !root->right){
            if(sum==targetSum){
            ans.push_back(path);
            return;
            }else return;
        }
         solve(root->left,targetSum,ans,sum,path);
         solve(root->right,targetSum,ans,sum,path);
    }
};