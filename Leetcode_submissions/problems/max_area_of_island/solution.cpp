class Solution {
public:
    vector<vector<int>> g;
    int dirx[4] = {0, 0, 1, -1};
    int diry[4] = {1, -1, 0, 0};
    int dfs(int a, int b){
        if ((a < 0 || a == g.size()) || (b < 0 || b == g[0].size())) return 0;
        if (g[a][b] == 0) return 0;
        g[a][b] = 0;
        int ans = 1;
        for (int i=0;i<4;i++){
            ans += dfs(a+ dirx[i], b + diry[i]);
        }
        return ans;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        g = grid;
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j] == 1){
                    ans = max(ans, dfs(i, j));
                }           
            }
        }
        return ans;
    }
};