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
  vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> res;
    if(root){
      q.push(root);
    }

    while(!q.empty()){
      int curQSize = q.size();
      vector<int> currentlevel;
      for(int i=0; i < curQSize; i++){
        TreeNode* front = q.front();
        q.pop();
        currentlevel.push_back(front->val);
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
      }
      res.push_back(currentlevel);
    }
    return res;
  }
};