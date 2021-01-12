class Solution {
public:
    vector<vector<int> > memo;
    vector<vector<int> > arr;
    int n;
    int ans = INT_MAX;
    void dfs(int x, int y, int cur){
        
        if (y == n-1){
            ans = min(ans, cur);
            return;
        }
       
        if (cur > memo[x][y]){
            return;
        }
        // printf("%d %d %d\n", x, y, cur);
        memo[x][y] = cur;
        dfs(x, y+1, cur + arr[y+1][x]);
        dfs(x+1, y+1, cur + arr[y+1][x+1]);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        this->n = triangle.size();
        this->arr = triangle;
        memo = vector<vector<int> > (n, vector<int>(n, INT_MAX));
        dfs(0,0,arr[0][0]);
        return ans;
    }
};