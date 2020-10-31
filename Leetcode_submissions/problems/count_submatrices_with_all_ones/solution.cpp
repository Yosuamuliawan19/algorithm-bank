class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        for (int i=0;i<n;i++){
            for (int j=1;j<m;j++){
                mat[i][j] += mat[i][j-1];
            }
        }
        
         for (int i=0;i<m;i++){
            for (int j=1;j<n;j++){
                mat[j][i] += mat[j-1][i];
            }
        }
        int ans = 0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                int bound = m;
                for (int x=i;x<n;x++){
                    for (int y=j;y<bound;y++){
                        int sz = (x-i+1) * (y-j+1);
                        int amt = mat[x][y];
                        amt -=  (j-1 < 0) ? 0 : mat[x][j-1];
                        amt -=  (i-1 < 0) ? 0 : mat[i-1][y];
                        amt +=  (i-1 < 0 || j-1 < 0) ? 0 : mat[i-1][j-1];
                        if (sz == amt) ans ++;
                        else bound = y;
                    }
                }
            }
        }
        
        
        return ans;
    }
};