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
    int ans = 0;
    int rec(TreeNode* n){
        if (n == nullptr) return 0;
        int l = 0, r = 0;
        if (n->left != nullptr){
            l = rec(n->left);
        }
        if (n->right != nullptr){
            r = rec(n->right);
        }
        ans += abs(r-l);
        return n->val + l + r;
    }
    int findTilt(TreeNode* root) {
        rec(root);
        return ans;
    }
};