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
    bool f = 0;
    int target = 0;
    void rec(TreeNode* cur, int sum){
        if (f || cur == nullptr) return;
        sum += cur->val;
        if (cur->left == nullptr && cur->right == nullptr){
            if (sum == target) f = 1;
            
            return;
        }
        if (cur->left != nullptr)
        rec(cur->left, sum);
        
        if (cur->right != nullptr)
        rec(cur->right, sum);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        target = sum;
        rec(root, 0);
        return f;
    }
};