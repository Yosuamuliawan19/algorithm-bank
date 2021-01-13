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
    void rec(TreeNode* cur){
        if (cur == nullptr) return;
        TreeNode* tmp = cur->left;
        cur->left = cur->right;
        cur->right = tmp;
        rec(cur->left);
        rec(cur->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        rec(root);
        return root; 
    }
};