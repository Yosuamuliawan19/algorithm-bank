class Solution {
public:
    int dirx[4] = {1,0,-1,0};
    int diry[4] = {0,1,0,-1};
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size(), m = grid[0].size();
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j] == 1){
                    for (int k=0;k<4;k++){
                        int a = i+dirx[k], b = j+diry[k];
                        if (a < 0 || a >= n || b < 0 || b >= m || grid[a][b] == 0){
                            ans ++;
                        }
                    }
                }
                
            }
        }
        return ans;
    }
};