class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        int n = A.size(), m = A[0].size();
        
        for (int i=0;i<n;i++){
            ans.push_back(vector<int>());
            for (int j=m-1;j>=0;j--){
                if (A[i][j]) ans[i].push_back(0);
                else ans[i].push_back(1);
                // cout << A[i][j] << " ";
            }
            // cout <<endl;
        }
        return ans;
    }
};