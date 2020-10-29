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
    vector<int> ans;
    
    void traverse(TreeNode* root){
        ans.push_back(root->val);
        if (root-> left != nullptr ){
           traverse(root->left);
        }
        
        if (root-> right != nullptr ){
           traverse(root->right);
        }
    
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if (root != nullptr)
        traverse(root);
        return ans; 
    }
};