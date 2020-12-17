class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i=1;i<=numRows;i++){
            ans.push_back(vector<int>(i, 1));
            if (i >= 3){
                for (int j=1;j<i-1;j++){
                    // cout << j << " " ;
                    ans[i-1][j] = ans[i-2][j-1] + ans[i-2][j];
                }
                // cout << endl;
            }
        }
        
        return ans;
    }
};