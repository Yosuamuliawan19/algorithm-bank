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
    vector<string> ans;
    void trav(TreeNode* cur, string str){
        if (cur->left == nullptr && cur->right == nullptr){
            ans.push_back(str);
            return;
        }
        
        if (cur->left != nullptr){
            trav(cur->left, str+"->"+to_string(cur->left->val));
        }
        if (cur->right != nullptr){
            trav(cur->right, str+"->"+to_string(cur->right->val));
        }
            
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) return ans;
        trav(root, to_string(root->val));
        return ans;
    }
};