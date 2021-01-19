class Solution {
public:
    int ans = 0, cur = 0, n, m;
    vector<vector<int>> arr;
    int dirx[4] = {1,0,-1,0};
    int diry[4] = {0,1,0,-1};
    void dfs(int x, int y){
        arr[x][y] = 0;
        cur ++;
        for (int i=0;i<4;i++){
            int a = x + dirx[i], b = y + diry[i];
            if (a >= 0 && a < n && b >= 0 && b < m && arr[a][b] == 1){
                dfs(a,b);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        this->arr = grid;
        this->n = grid.size();
        this->m = grid[0].size();
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j] == 1){
                    cur = 0;
                    dfs(i,j);
                    ans = max(ans, cur);
                }
            }
        }
        return ans;
    }
};