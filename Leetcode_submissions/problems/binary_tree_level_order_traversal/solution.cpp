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
    
    void trav(TreeNode* root){
        queue<pair<TreeNode*, int> > q;
        q.push(make_pair(root, 0));
        while (!q.empty()){
            pair<TreeNode*, int> cur = q.front(); q.pop();
            cout << cur.first->val << endl;
            if (ans.size() <= cur.second) ans.push_back(vector<int>());

            ans[cur.second].push_back(cur.first->val);
            if (cur.first->left != nullptr){
                q.push(make_pair(cur.first->left, cur.second + 1));
            }
            
            if (cur.first->right != nullptr){
                q.push(make_pair(cur.first->right, cur.second + 1));
            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root != nullptr) trav(root);
        return ans;
    }
};