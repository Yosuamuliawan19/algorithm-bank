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
    bool suc = 1;
    vector<int> arr;
    void trav(TreeNode* node){
        if (node == nullptr) return;
        trav(node->left);
        arr.push_back(node->val);
        trav(node->right);
      
    } 
    bool isValidBST(TreeNode* root) {
        trav(root);
        for (int i=1;i<arr.size();i++){
            if (arr[i-1] >= arr[i]) return 0;
        }
        return 1;
    }
};