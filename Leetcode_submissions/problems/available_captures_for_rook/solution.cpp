class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int sx, sy, tmp;
        int ans = 0;
        for (int i=0;i<board.size();i++){
            for (int j=0;j<board.size();j++){
                if (board[i][j] == 'R'){
                    sx = i; sy = j;
                }
            }
        }
        for (int i=sx;i!=8;i++){
            // printf("%c ", board[i][sy]);
            if (board[i][sy] == 'p'){
                ans ++; break;
            }else if (board[i][sy] == 'B'){
                break;
            }
        }
        // cout << endl;
        for (int i=sx;i!=-1;i--){
            // printf("%c ", board[i][sy]);
             if (board[i][sy] == 'p'){
                ans ++; break;
            }else if (board[i][sy] == 'B'){
                break;
            }
        }
        // cout << endl;
        for (int i=sy;i!=-1;i--){
            // printf("%c ", board[sx][i]);
             if (board[sx][i] == 'p'){
                ans ++; break;
            }else if (board[sx][i] == 'B'){
                break;
            }
        }
        // cout << endl;
        for (int i=sy;i!=8;i++){
            // printf("%c ", board[sx][i]);
            if (board[sx][i] == 'p'){
                ans ++; break;
            }else if (board[sx][i] == 'B'){
                break;
            }
        }
        // cout << endl;
        
        return ans;
    }
};