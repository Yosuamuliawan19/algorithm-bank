class Solution {
public:
    int dirx[4] = {1,0,-1,0};
    int diry[4] = {0,1,0,-1};
    vector<vector<int>> generateMatrix(int n) { 
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int curdir = 0; int a = 0, b = 0;
        for (long long i=1;i<=n*n;i++){
            ans[b][a] = i;
            // cout << a << " " << b << " " << i << endl;
            int x = a + dirx[curdir], y = b + diry[curdir];
            if (x >= 0 && x < n && y >= 0 && y < n &&  ans[y][x] == 0){
                a = x; b = y;
            }else{
                curdir = (curdir+1) % 4;
                x = a + dirx[curdir]; y = b + diry[curdir];
                a = x; b = y;
            }
        }
        return ans;
    }
};