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
  bool isBalanced(TreeNode* root) {
    bool isBalanced = true;
    heightOfBT(root,isBalanced);
    return isBalanced;
  }
  private:
  int heightOfBT(TreeNode* root, bool &isBalanced){
    if(root == nullptr) return 0;
    int lh = heightOfBT(root->left, isBalanced);
    int rh = heightOfBT(root->right, isBalanced);
    isBalanced = isBalanced && (abs(lh-rh)) <= 1;
    return 1+max(lh,rh);
  }
};
