class Solution {
public:
    int dirx[4] = {0,0,-1,1};
    int diry[4] = {1,-1,0,0};
    vector<vector<int>> vis;
    vector<vector<int>> mat;    
    vector<vector<int>> h;    

    void dfs(int i, int j, int val){        
        if (vis[i][j]) return;
        mat[i][j] |= val;
        vis[i][j] = true;
        
        for (int k=0;k<4;k++){
            int x = i + dirx[k], y = j + diry[k];
            if (x >= 0 && x < h.size() && y >= 0 & y < h[0].size() && h[x][y] >= h[i][j]){
                dfs(x, y, val);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        mat = vector<vector<int>>(heights.size(), vector<int>(heights[0].size(), 0));
        h = heights;
        
        vis = vector<vector<int>>(heights.size(), vector<int>(heights[0].size(), 0));
        for (int i=0;i<h.size();i++) dfs(i, 0, 1);
        for (int i=0;i<h[0].size();i++) dfs(0, i, 1);
        
        vis = vector<vector<int>>(heights.size(), vector<int>(heights[0].size(), 0));
        for (int i=0;i<h.size();i++)  dfs(i, h[0].size()-1,  2);
        for (int i=0;i<h[0].size();i++) dfs(h.size()-1, i, 2);
        
        
        vector<vector<int>> ans;
        for (int i=0;i<h.size();i++){
            for (int j=0;j<h[0].size();j++){
                if (mat[i][j] == 3) ans.push_back(vector<int>({i, j}));
            }
        }
        return ans;
    }
};