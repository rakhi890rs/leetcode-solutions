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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>ans;
        int sum=0;
        inorder(root,ans);
        for(int i=0;i<ans.size();i++){
            if(low<=ans[i] && ans[i]<=high){
                sum+=ans[i];
            }
        }
        return sum;
    }
    void inorder(TreeNode* root,vector<int>&ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
};