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
    int calcHeight(TreeNode*root){
      if(root==NULL){
          return 0;
      } 
        return max(calcHeight(root->left),calcHeight(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh=calcHeight(root->left);
        int rh=calcHeight(root->right);
        int height=lh+rh;
        return max(height,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
        
        
    }
};