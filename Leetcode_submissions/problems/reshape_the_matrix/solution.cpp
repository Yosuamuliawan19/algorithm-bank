class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n = nums.size(), m = nums[0].size();
        if (n*m != r*c) return nums;
        vector<vector<int>> ans(r, vector<int>(c, 0));
        
        int x = 0, y = 0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                ans[x][y] = nums[i][j];
                if (y == c-1){
                    y = 0; x ++;
                }else{
                    y++;
                }
            }
        }
        return ans;
    }
};