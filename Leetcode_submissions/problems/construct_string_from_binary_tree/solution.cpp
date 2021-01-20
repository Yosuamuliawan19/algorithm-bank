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
    string ans = "";
    void rec(TreeNode* n){
        if (n == nullptr) return ;
        ans += to_string(n->val);
        if (n->left != nullptr){
            ans += '(';
            rec(n->left);
            ans += ')';
        }else if (n->right != nullptr) ans += "()";
        if (n->right != nullptr){
            ans += '(';
            rec(n->right);
            ans += ')';
        }
    }
    string tree2str(TreeNode* t) {
        rec(t);
        return ans;
    }
};