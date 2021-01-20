class Solution {
public:
    int dirx[8] = {1,1,1,0,0,-1,-1,-1};
    int diry[8] = {0,-1,1,1,-1,0,1,-1};
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int n = M.size(), m = M[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                int cnt = 1, sum = M[i][j];
                for (int k=0;k<8;k++){
                    int x = i + dirx[k], y = j + diry[k];
                    if (x >= 0 && x < n && y >= 0 && y < m){
                        cnt ++;
                        sum += M[x][y];
                    }
                }
                ans[i][j] = floor((double) sum / (double) cnt);
                
            }
        }
        return ans;
    }
};