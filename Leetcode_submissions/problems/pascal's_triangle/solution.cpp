class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int len = 1;
        for (int i=0;i<numRows;i++){
            cout << i << endl;
            vector<int> row;
            for (int j=0;j<len;j++){
                if (j == 0 || j == len-1) row.push_back(1);
                else row.push_back(ans[i-1][j] + ans[i-1][j-1]);
            }
            ans.push_back(row);
            len ++;
        }
        return ans;
    }
};