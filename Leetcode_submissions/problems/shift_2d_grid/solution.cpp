class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        cout << n <<" " << m << endl;
        vector<vector<int>> ans = vector<vector<int>>(n, vector<int>(m));
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                int a = (i+ ((j+k)/m))%n;
                int b = (j+k)%m;
                // printf("%d %d to %d %d\n", i,j,a,b);
                ans[a][b] = grid[i][j];
            }
        }
        
        
        return ans;
    }
};