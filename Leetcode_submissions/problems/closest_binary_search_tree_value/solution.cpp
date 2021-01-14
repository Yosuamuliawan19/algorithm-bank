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
    double target = 0;
    int ans = 0;
    void trav(TreeNode* cur){
        if (cur == nullptr) return;
        if (abs(target-cur->val) < abs(target-ans)){
            ans = cur->val;
        } 
        
        
        if (target > cur->val && cur->right != nullptr){
            trav(cur->right);
        }else if (target < cur->val  && cur->left != nullptr){
            trav(cur->left);
        }
    }
    int closestValue(TreeNode* root, double target) {
        this->target = target;
        if (root == nullptr) return 0;
        this->ans = root->val;
        trav(root);
        return ans;
    }
};