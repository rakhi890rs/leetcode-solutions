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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        TreeNode* newRoot = nullptr;
        buildTree(newRoot,ans,0,ans.size()-1);
        return newRoot;
    }
    void inorder(TreeNode* root,vector<int> & ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    void buildTree(TreeNode* &root,vector<int> & ans,int start,int end){
        if(ans.size()==0) return;
        if(start>end) return;
        int mid=start+(end-start)/2;
        TreeNode* temp= new TreeNode(ans[mid]);
        if(!root){
            root=temp;
        }
        buildTree(root->left,ans,start,mid-1);
        buildTree(root->right,ans,mid+1,end);
        
    }
};