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
    TreeNode* ans = nullptr;
    int target;
    void rec(TreeNode* n){
        if (n == nullptr || ans != nullptr) return;
        if (n->val == target){
            ans = n;
            return;
        }
        if (n->left != nullptr) rec(n->left);
        if (n->right != nullptr) rec(n->right);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        this->target = val;
        rec(root);
        return ans;
    }
};