/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans;
    int p, q;
    int LCA(TreeNode* node){
        if (ans != nullptr || node == nullptr) return 0;
        int cnt = 0;
        if (node->val == p || node->val == q) cnt ++;
        if (node->left != nullptr){
            cnt += LCA(node->left);
        }
        if (node->right != nullptr){
            cnt += LCA(node->right);
        }
        if (cnt == 2 && ans == nullptr){
            ans = node;
        }
        // cout << node->val << " " << cnt << endl;
        return cnt;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        this->p = p->val;
        this->q = q->val;
        LCA(root);
        
        return ans;    
    }
};