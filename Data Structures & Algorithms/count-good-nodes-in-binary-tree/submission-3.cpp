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
  int goodNodes(TreeNode* root) {
    return goodNodesCount(root, root->val);
  }
private:
  int goodNodesCount(TreeNode* root, int maxval){
    int count = 0;

    if(root == nullptr) return count;
    if(root->val >= maxval) count = 1;

    int NewMaxval = max(root->val, maxval);

    count += goodNodesCount(root->left, NewMaxval);
    count += goodNodesCount(root->right, NewMaxval);

    return count;
  }
};