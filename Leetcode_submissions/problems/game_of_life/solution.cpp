class Solution {
public:
    int dirx[8] = {-1,0,1,-1,0,1,1,-1};
    int diry[8] = {1,1,1,-1,-1,-1,0,0};
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> ans = board;
        for (int i=0;i<board.size();i++){
            for (int j=0;j<board[0].size();j++){
                int cnt = 0;
                for (int k=0;k<8;k++){
                    int a = i+dirx[k], b = j+diry[k];
                    if (a>=0&&a<board.size()&&b>=0&&b<board[0].size()){
                        if (board[a][b] == 1) cnt++;
                    }
                }
                if (cnt < 2 || cnt > 3){
                    ans[i][j] = 0;
                }else if (cnt == 3){
                    ans[i][j] = 1;
                }
            }
        }
        board = ans;
    }
};