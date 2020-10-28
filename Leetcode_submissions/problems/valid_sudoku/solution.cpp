class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9, col[9] = {0}, row[9] = {0}, quad[9][9] = {0};
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (board[i][j] != '.'){
                    if (++ col[board[i][j] -'0'-1] > 1) return false;    
                    int curquad = floor(j/3) * 3 + floor(i/3);
                    if (++ quad[curquad][board[i][j] -'0'-1] > 1) return false;     
                }      
                if (board[j][i] != '.'){
                    if (++ row[board[j][i] -'0'-1] > 1) return false;
                }  
            }
            memset(col, 0, sizeof(col)); memset(row, 0, sizeof(row));
        }        
        return true;
    }
};