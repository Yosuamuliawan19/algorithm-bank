class Solution {
public:
    int ans = 0;
    int n, m;
    int dirx[4] = {0,0,-1,1};
    int diry[4] = {1,-1,0,0};
    vector<vector<int>> grid;
    bool vis[15][15] = {0};
    int dfs(int x, int y){
        vis[x][y] = 1;
        int a = 0;
        for (int i=0;i<4;i++){
            int nextX = x + dirx[i], nextY = y + diry[i];
            if(! (nextX < n && nextX >= 0 && nextY < m && nextY >= 0 && grid[nextX][nextY] != 0 && vis[nextX][nextY] == 0)){
                continue;
            }
            int cur = dfs(nextX, nextY);
            if (cur > a) {
                a = cur;
            }
        } 
        
        // printf("%d %d result is %d %d\n", x,y,a, grid[x][y]);
        vis[x][y] = 0;
        return grid[x][y] + a;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        this->grid = grid;
        n = grid.size(), m = grid[0].size();
        memset(vis, 0, sizeof(vis));
        // floodfill 
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (!vis[i][j] && grid[i][j] != 0){
                    printf("going to %d %d\n", i, j );
                   ans = max(ans, dfs(i,j));
                }
            }
        }
      
        
        return ans;
    }
};