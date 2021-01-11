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
    int a = 0, b = 0;
    TreeNode* para, *parb; 
    int x, y;
    void rec(TreeNode* node, int dep, TreeNode* parent){
        if (node == nullptr) return ;
        if (node->val == x){
            a = dep;
            para = parent;
            return;
        }
        if (node->val == y){
            b = dep;
            parb = parent;
            return;
        }
        if (node->left != nullptr){
            rec(node->left, dep +1, node);
        }
        if (node->right != nullptr){
            rec(node->right, dep +1, node);
            
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        this->x = x;
        this->y = y;
        rec(root, 0, nullptr);
    
        return a == b && para != parb;
    }
};