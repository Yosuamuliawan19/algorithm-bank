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
    int ans = INT_MAX;
    void rec(TreeNode* cur, int d){
        if (d >= ans) return;
        if (cur->left == nullptr && cur->right == nullptr){
            ans = min(ans, d);
            return;
        }
        if (cur->left != nullptr){
            rec(cur->left, d+1);
        }
        if (cur->right != nullptr){
            rec(cur->right, d+1);
        }
    }
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        rec(root, 1);
        return ans;
    }
};