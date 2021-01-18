class Solution {
public:
    int dirx[4] = {1,0,-1,0};
    int diry[4] = {0,1,0,-1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (newColor == image[sr][sc]) return image;
        queue<pair<int,int> > q;
        int n = image.size(), m = image[0].size();

        int init = image[sr][sc];
        q.push(make_pair(sr, sc));
        while (!q.empty()){
            pair<int,int> cur = q.front(); q.pop();
            image[cur.first][cur.second] = newColor;
            for (int i=0;i<4;i++){
                int x = cur.first + dirx[i], y = cur.second + diry[i];
                if (x >= 0 && x < n && y >= 0 && y < m && image[x][y] == init){
                    q.push(make_pair(x,y));
                }
            }
        }
        return image;
    }
};