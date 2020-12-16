class Solution {
public:
    int dirx[4] = {0,1,-1,0};
    int diry[4] = {1,0,0,-1};
    

    int uniquePathsWithObstacles(vector<vector<int>>& in) {
         int m = in.size(), n = in[0].size();
        vector<vector<int>> arr = vector<vector<int>>(m, vector<int>(n, 0));
       
        
        queue<pair<int,int> > q;
        if (in[0][0] == 0){
            arr[0][0] = 1;
            q.push(make_pair(0,0));
        }
        
        
        while (!q.empty()){
            int a = q.front().first, b = q.front().second; q.pop();
            for (int i=0;i<4;i++){
                int x = a+dirx[i], y = b+diry[i];
                if (x >= 0 && x < m && y >= 0 && y < n && in[x][y] == 0 && arr[x][y] == 0){
                    if (x>0) arr[x][y] += arr[x-1][y];
                    if (y>0) arr[x][y] += arr[x][y-1];
                    
                    if (arr[x][y] == 0) in[x][y] = 1;
                    // if (x>0 && y>0) arr[x][y] += arr[x-1][y-1];
                    // cout << x << " " << y << " " << arr[x][y] << endl;
                    q.push(make_pair(x,y));
                }
            }
        }
        return arr[m-1][n-1];
    }
};