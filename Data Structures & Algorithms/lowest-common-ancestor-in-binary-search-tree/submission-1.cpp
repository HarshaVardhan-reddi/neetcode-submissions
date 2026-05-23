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
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == nullptr) return nullptr;
    if(root == p || root == q) return root;
    TreeNode* lft = lowestCommonAncestor(root->left, p, q);
    TreeNode* rt = lowestCommonAncestor(root->right, p, q);
    
    if(lft == p && rt == q || lft == q && rt == p) return root;

    if(lft) return lft;

    if(rt) return rt;

    return nullptr;
  }
};
