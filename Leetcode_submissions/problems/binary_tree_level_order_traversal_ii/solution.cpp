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
    vector<vector<int>> ans;
    void rec(TreeNode* cur, int d){
        if (cur == nullptr) return;
        if (ans.size() <= d){
            ans.push_back(vector<int>());
        }
        ans[d].push_back(cur->val);
        if (cur->left != nullptr){
            rec(cur->left, d+1);
        }
        if (cur->right != nullptr){
            rec(cur->right, d+1);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        rec(root, 0);
        vector<int> tmp;
        int n = ans.size();
        for (int i=0;i<n/2;i++){
            tmp = ans[i];
            ans[i] = ans[n-i-1];
            ans[n-i-1] = tmp;
        }
        
        
        return ans;
    }
};