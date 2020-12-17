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
    vector<unsigned long long> mn;
    vector<unsigned long long> mx;
    void rec(TreeNode* node, unsigned long long idx, unsigned long long d){
        if (mx.size() == d) mx.push_back(0);
        if (mn.size() == d) mn.push_back(ULLONG_MAX);
        mx[d] = max(mx[d], idx);
        mn[d] = min(mn[d], idx);
        
        if (node->left != nullptr){
            rec(node->left, idx*2, d+1);
        }
        if (node->right != nullptr){
            rec(node->right, idx*2 +1, d+1);
        }
    }
        
    int widthOfBinaryTree(TreeNode* root) {
        rec(root, 1, 0);
        unsigned long long ans = 0;
        for (int i=0;i<mn.size();i++){
            ans = max(ans, 1+(mx[i]-mn[i]));
        }
        return ans;
    }
};