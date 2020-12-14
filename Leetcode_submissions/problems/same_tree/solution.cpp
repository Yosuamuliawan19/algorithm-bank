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
    
    bool ans = 1;
    void rec(TreeNode* a, TreeNode* b){
        if (!ans) return;
        cout << a->val << " " << b->val << endl;
        if (a->val != b->val){
            ans = 0;
        }
        if (a->left != nullptr){
            if (b->left != nullptr){
                rec(a->left,b->left);
            }else ans = 0;
        }else{
            if (b->left != nullptr){
              ans = 0;
            }
        }
        
        if (a->right != nullptr){
            if (b->right != nullptr){
                rec(a->right,b->right);
            }else ans = 0;
        }else{
            if (b->right != nullptr){
              ans = 0;
            }
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr || q == nullptr){
            return (p == q);
        }
        rec(p, q);
        return ans;
    }
};