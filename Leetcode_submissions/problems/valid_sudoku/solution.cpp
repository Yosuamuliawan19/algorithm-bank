class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // arrays to store visited numbers for each row, columns, and each quadrant
        int n = 9, row[9] = {0}, col[9] = {0}, q[9][9] = {0};
        
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (board[i][j] != '.'){
                    // check if row already has this number
                    if (++row[board[i][j] - '0' - 1] > 1) return false;                    
                    
                    // check if quadrant already has this number
                    int quad = floor(j/3) * 3 + floor(i/3);
                    if (++q[quad][board[i][j] - '0' - 1] > 1) return false;
                }
                if (board[j][i] != '.'){
                    // check if column already has this number
                    if (++col[board[j][i] - '0' - 1] > 1) return false;

                }
                
            }
            // reset row and column
            memset(row, 0, sizeof(row));
            memset(col, 0, sizeof(col));
        }
        
        return true;
    }
};