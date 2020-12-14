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
    vector<int> heights;
    bool f = 0;
    int rec(TreeNode* cur){
        if (f) return 0;
        if (cur == nullptr) return 0;
        
        if (cur->left == nullptr && cur->right == nullptr){
            return 1;
        }
        
        int a = 0, b = 0;
        if (cur->left != nullptr){
            a = rec(cur->left);
        }
        if (cur->right != nullptr){
            b = rec(cur->right);
        }
        if (abs(a-b) > 1){
            f = 1;
        }
        // cout << a << " " << b << " " << cur->val << endl;
        return 1 + max(a, b);
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return 1;
        rec(root);
        return !f;
    }
};