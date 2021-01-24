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
    bool ans = 0;
    TreeNode* t;
    bool check (TreeNode* a, TreeNode* b){
        if ((a == nullptr && b != nullptr) || (b == nullptr && a != nullptr)) return 0;
        if (a == nullptr && b == nullptr) return 1;
        return check(a->left, b->left) && check(a->right, b->right) && (a->val == b->val);
    }
    void rec(TreeNode* n){
        if (n == nullptr) return;
        if (n->val == t->val) {
            ans = ans || check(n, t);
        }
        if (n->left != nullptr) rec(n->left);
        if (n->right != nullptr) rec(n->right);
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        this->t = t;
        rec(s);
        
        return ans;
    }
};