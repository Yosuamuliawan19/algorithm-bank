class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0, n = mat.size();
        for (int i=0;i<n;i++){
            ans += mat[i][i] + (i == n-1-i ? 0 :mat[i][n-1-i]);
        }
        return ans;
    }
};