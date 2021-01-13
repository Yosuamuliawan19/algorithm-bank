class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int cnt = 0;
        for (int i=0;i<matrix[0].size();i++){
            int x = i;
            int cur = matrix[0][x];
            for (int j=0;j<matrix.size();j++){
                if (cur != matrix[j][x++]) return 0;
                // cout << matrix[j][x++] << endl;
                if (x == matrix[0].size()) break;
            }
        }
        for (int i=1;i<matrix.size();i++){
            int x = i;
            int cur = matrix[x][0];
            for (int j=0;j<matrix[0].size();j++){
                if (cur != matrix[x++][j]) return 0;
                // cout << matrix[x++][j] << endl;
                if (x == matrix.size()) break;
            }
        }
        return 1;
    }
};