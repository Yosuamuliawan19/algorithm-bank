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
    vector<int> arr;
    void rec(TreeNode* node){
        if (node == nullptr) return;
        arr.push_back(node->val);
        if (node->left != nullptr) rec(node->left);
        if (node->right != nullptr) rec(node->right);
    }
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        rec(root);
        sort(arr.begin(), arr.end());
        for (int i=0;i<arr.size()-1;i++){
            ans = min(ans, arr[i+1] - arr[i]);    
        }
        return ans;
        
    }
};