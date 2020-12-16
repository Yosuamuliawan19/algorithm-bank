class Solution {
public:
    int dirx[4] = {0,0,1,-1};
    int diry[4] = {1,-1,0,0};
    vector<vector<char>> board;
    string word;
    int n, m, o;
    bool check(int a, int b, int idx){
        // cout << a << " "<< b << " " << board[a][b] << endl;
        if (idx == o-1){
            return 1;
        }
        // cout << "finding " << word[idx+1] << endl;
        char tmp = board[a][b];
        board[a][b] = '-';
        for (int i=0;i<4;i++){
            int x = a+dirx[i], y = b+diry[i];
            if (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == word[idx+1]){
                if (check(x, y, idx+1)){
                    board[a][b] = tmp;
                    return 1;
                }
            } 
        }
        board[a][b] = tmp;
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        this->board = board;
        this->word = word;
        n = board.size(); m = board[0].size(); o = word.size();
        vector<pair<int,int>> start;
        for (int i=0;i<board.size();i++){
            for (int j=0;j<board[0].size();j++){
                if (board[i][j] == word[0]){
                    start.push_back(make_pair(i,j));
                } 
            }
        }
        for (pair<int,int> cur: start){
            // cout << cur.first << " " << cur.second << endl;
            if (check(cur.first, cur.second, 0)) return 1;
        }
        return 0;
    }
};