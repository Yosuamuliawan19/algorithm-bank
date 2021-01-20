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
    vector<double> sum;
    vector<int> cnt;
    void rec(TreeNode* n, int dep){
        if (n == nullptr) return;
        if (dep >= sum.size()){
            sum.push_back(0);
            cnt.push_back(0);
        }
        sum[dep] += n->val;
        cnt[dep] ++;
        if (n->left != nullptr){
            rec(n->left, dep+1);
        }
        if (n->right != nullptr){
            rec(n->right, dep+1);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        
        rec(root, 0);
        for (int i=0;i<sum.size();i++){
            sum[i] = sum[i] / cnt[i];
        }
        return sum;
    }
};