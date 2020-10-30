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
    int cnt = 0, cur = 0, target;
    void trav(TreeNode* a){
        if (cnt >= target || a == nullptr ) return;
        trav(a->left);
        if (cnt < target){
            cnt ++; cur = a->val;
            // cout << a->val <<  " "<< cnt << endl;
        }
        trav(a->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        target = k;
        if (root != nullptr){
            trav(root);
        }
        return cur;
       
    }
};