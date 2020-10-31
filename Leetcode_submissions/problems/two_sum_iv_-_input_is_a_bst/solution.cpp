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
    int target;
    TreeNode* rootNode;
    bool suc = 0;
    void trav(TreeNode * node){
        if (node == nullptr || suc) return ;
        // cout << node->val << endl;
        TreeNode* partner = find(rootNode, target-(node->val));
        if (partner != nullptr && partner != node){
            // cout << "found " << node->val << " " << partner->val << endl;
            suc = 1;
            return;
        }
        trav(node->left);
        trav(node->right);
    }
    
    
    TreeNode* find(TreeNode* node, int target){
        if (node == nullptr)  return nullptr;
        if (target == node->val) return node;
        else if (target > node->val){
            return find(node->right, target);
        }else{
            return find(node->left, target);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        target = k; rootNode = root;
        trav(root);
        
        return suc;   
    }
};