class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int dirx[4] = {1,0,-1,0};
        int diry[4] = {0,1,0,-1};
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j] == '1'){
                    ans ++;
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));
                    while (!q.empty()){
                        pair<int,int> cur = q.front(); q.pop();
                        grid[cur.first][cur.second] = '0';
                        for (int k=0;k<4;k++){
                            int x = cur.first + dirx[k], y = cur.second + diry[k];
                            if (x >= 0 && x < n && y >=0 && y < m && grid[x][y] == '1'){
                                q.push(make_pair(x,y));
                                grid[x][y] = '0';
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};