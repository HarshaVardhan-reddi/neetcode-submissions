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
  bool isValidBST(TreeNode* root) {
    return isValidBstHelper(root, INT_MIN, INT_MAX);
  }

  private:
  bool isValidBstHelper(TreeNode* root, long minval, long maxval){
    if(root == nullptr) return true;

    if(root->val >= maxval || root->val <= minval) return false;
    
    return isValidBstHelper(root->left, minval, root->val) && isValidBstHelper(root->right, root->val, maxval);
  }
};
