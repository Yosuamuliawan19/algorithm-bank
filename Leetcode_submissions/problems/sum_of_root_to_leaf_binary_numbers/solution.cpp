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
    void rec(TreeNode* cur, int sum){
        sum = (sum << 1) | cur->val;
        if (cur->left == nullptr && cur->right == nullptr){
            ans += sum;
            return;
        }
        if (cur->left != nullptr){
            rec(cur->left, sum);
        }
        if (cur->right != nullptr){
            rec(cur->right, sum);
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        if (root == nullptr) return 0;
        rec(root, 0);
        return ans;
    }
};