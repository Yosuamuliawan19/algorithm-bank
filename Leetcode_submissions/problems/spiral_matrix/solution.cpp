class Solution {
public:
    int dirx[4] = {0,1,0,-1};
    int diry[4] = {1,0,-1,0};
    
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans; 
        ans.push_back(arr[0][0]);
        arr[0][0] = 1001;
        int m = arr.size(), n = arr[0].size();
        int cnt = 1;
        int i = 0, j = 0;
        int dir = 0;
        while (cnt != m*n){
            int x = i+dirx[dir], y = j+diry[dir];
            if (x >= 0 && x < m && y >= 0 && y < n){
                if (arr[x][y] == 1001){
                    dir = (dir+1) % 4;
                    continue;
                }else{
                    ans.push_back(arr[x][y]);
                    arr[x][y] = 1001;
                    i = x; j = y;
                    cnt++;
                }
            }else{
                dir = (dir+1) % 4;
            }
        }
        return ans;
        
    }
};