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
  int kthSmallest(TreeNode* root, int k) {
    int counter = 0;
    TreeNode* node = kthSmallestNode(root, k, counter);
    if(node == nullptr) return 0;
    return node->val;
  }

  TreeNode* kthSmallestNode(TreeNode* root, int k, int &counter){
    if(root == nullptr) return nullptr;
    TreeNode* ans = kthSmallestNode(root->left, k, counter);
    if(ans) return ans;
    counter++;
    if(k == counter) return root;
    return kthSmallestNode(root->right, k, counter);
  }
};

