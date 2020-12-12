class Solution {
public:
    int dirx[4] = {0,1,-1,0};
    int diry[4] = {1,0,0,-1};
    bool vis[100][100] = {0};
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        queue<pair<int,int> > q;
        vector<int> tmp;
        vector<vector<int> > ans;
        vis[r0][c0] = 1;
        q.push(make_pair(r0,c0));
        while (!q.empty()){
            pair<int,int> cur = q.front(); q.pop();
            // printf("cur %d %d\n", cur.first, cur.second);
            ans.push_back(vector<int>({cur.first,cur.second}));
            for (int i=0;i<4;i++){
                int x = cur.first + dirx[i], y = cur.second + diry[i];
                if (x >= 0 && x < R && y >= 0 && y < C && !vis[x][y]){
                    vis[x][y] = 1;
                    // printf("pushing %d %d\n", x, y);
                    q.push(make_pair(x,y));
                }
            }
        }
        return ans;
    }
};