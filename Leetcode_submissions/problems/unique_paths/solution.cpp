class Solution {
public:
    int arr[110][110];
    
    int dp(int i, int j){
        if (i < 0 || j < 0) return 0;
        if (arr[i][j] != -1) return arr[i][j];
        int cur = 0;
        
        if (i != 0) cur += dp(i-1,j);
        if (j != 0) cur += dp(i, j-1);
            
        return arr[i][j] = cur;
    }
    int uniquePaths(int m, int n) {
        
        // memset(arr, sizeof(arr), -1);
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++) arr[i][j] = -1;
        }
        arr[0][0] = 1;
        return dp(m-1, n-1);
    }
};