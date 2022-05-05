class Solution {
public:
    void dfs(vector<vector<char>> &g, int x, int y){
        // check if out of bounds, or already visited / is water
        if (x == -1 || x >= g.size() ||
            y == -1 || y >= g[0].size() || g[x][y] == '0') 
                return;     
        
        // mark as visited / water
        g[x][y] = '0';
        
        // go to neighbouring grid
        dfs(g, x + 1, y);
        dfs(g,x, y + 1);
        dfs(g,x - 1, y);
        dfs(g, x, y - 1);
    } 
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size(); j++){
                if (grid[i][j] == '1'){
                    dfs(grid, i, j);
                    ans ++;
                }
            }
        }    
        return ans;
    }
};