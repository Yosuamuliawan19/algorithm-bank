class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> r(mat.size(),0), c(mat[0].size(),0);
        for (int i=0;i<mat.size();i++){
            for (int j=0;j<mat[0].size();j++){
                if (mat[i][j] == 1){
                    r[i] ++;
                    c[j] ++;
                }
            }
        }
        int ans = 0;
        for (int i=0;i<mat.size();i++){
            for (int j=0;j<mat[0].size();j++){
                if (mat[i][j] == 1){
                    // cout << r[i] + c[j] << endl;
                    if (r[i] + c[j] == 2) ans ++;  
                }
            }
        }
        
        // for (auto i: r) cout << i <<" ";
        // cout << endl;
        // for (auto i: c) cout << i << " ";
        // cout << endl;
        return ans;
    }
};