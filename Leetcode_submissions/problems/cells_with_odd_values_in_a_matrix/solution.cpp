class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>> arr = vector<vector<int>>(n, vector<int>(m, 0));
        for (auto in: indices){
            for (int i=0;i<n;i++){
                arr[i][in[1]]++;
            }
            for (int j=0;j<m;j++){
                arr[in[0]][j]++;
            }
        }
        int ans = 0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                ans += (arr[i][j]%2);
            }
        }
        return ans;
    }
};