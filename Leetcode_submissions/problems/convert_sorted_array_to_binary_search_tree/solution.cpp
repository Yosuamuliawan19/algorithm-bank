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
    TreeNode* conv(int l, int r){
        if (l > r) return nullptr;
        if (l == r) return new TreeNode(arr[l]);
        int m = l + (r-l)/2;
        TreeNode* ans = new TreeNode(arr[m], conv(l, m-1), conv(m+1,r));
        return ans;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        arr = nums;
        return conv(0, nums.size()-1);
    }
};