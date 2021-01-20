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
    
    long long min1, min2 = LLONG_MAX;
    void dfs(TreeNode* n){
        if (n != nullptr){
            if (n->val > min1 && n->val < min2){
                min2 = n->val;
            }else if (min1 == n->val){
                dfs(n->left);
                dfs(n->right);
            }
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        min1 = root->val;
        dfs(root);
        return min2 < LLONG_MAX ? (int) min2: -1;
    }
};