class Solution {
public:
    int dirx[4] = {1,-1,0,0};
    int diry[4] = {0,0,1,-1};
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int orange = 0;
        queue<pair<pair<int,int>, int> > q;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j] == 2){
                    q.push(make_pair(make_pair(i, j), 0));
                    grid[i][j] = 1;
                }else if (grid[i][j] == 1){
                    orange++;
                } 
            }
        }
        
        int ans = 0, curorange = 0;
        while (!q.empty()){
            pair<pair<int,int>, int> cur = q.front();q.pop();
            if (grid[cur.first.first][cur.first.second] == 1) {
                if (cur.second != 0)curorange ++;
            } 
            else continue;
            grid[cur.first.first][cur.first.second] = 2;
            ans = max(ans, cur.second);
            // cout << cur.first.first<< " " << cur.first.second << " " << cur.second << endl;
            for (int i=0;i<4;i++){
                int x = cur.first.first + dirx[i], y = cur.first.second + diry[i];
                if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1){
                    q.push(make_pair(make_pair(x,y), cur.second +1));
                }
            }
        }
        // cout << orange<< " " << curorange << endl;
        if (curorange != orange) ans = -1;
        // cout << ans << endl;
        return ans;
    }
};