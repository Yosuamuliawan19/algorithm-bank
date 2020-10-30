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
    void trav(TreeNode* cur, vector<int>& a){
        if (cur == nullptr) return;
        if (cur->left == nullptr && cur->right == nullptr){
            a.push_back(cur->val);
            return;
        }
        trav(cur->left, a);
        trav(cur->right, a);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a, b;
        
        trav(root1, a);
        trav(root2, b);
        
        // for (auto i: a) cout << i << " ";
        // cout << endl;
        // for (auto i: b) cout << i << " ";
        if (a.size() != b.size()) return 0;
        
        for (int i=0;i<a.size();i++){
            if (a[i] != b[i]) return 0;
        }
        return 1;
    }
};