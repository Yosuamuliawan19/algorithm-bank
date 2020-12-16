class Solution {
public:
    int dirx[4] = {0,1};
    int diry[4] = {1,0};
    int minPathSum(vector<vector<int>>& grid) {
        if (grid.size() == 0) return 0;

        priority_queue< pair<int,pair<int,int>>, vector< pair<int,pair<int,int>>> , greater< pair<int,pair<int,int>>>> pq;
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, 0));
        pq.push(make_pair(grid[0][0], make_pair(0,0)));
        vis[0][0] = 1;
        while (!pq.empty()){
            int cost = pq.top().first, a = pq.top().second.first, b = pq.top().second.second; pq.pop();
            if (a == m-1 && b == n-1){
                return cost;
            }
            for (int i=0;i<2;i++){
                int x = a+dirx[i], y = b+diry[i];
                if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y]){
                    vis[x][y] = 1;
                    pq.push(make_pair(cost+grid[x][y], make_pair(x,y)));
                }
            }
        }
        return 0;
    }
};