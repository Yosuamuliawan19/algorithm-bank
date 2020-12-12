class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> arr = vector<vector<int>>(3, vector<int>(3, 0));
        
        int f = 1; 
        for(auto cur: moves){
            arr[cur[0]][cur[1]] = f;
            if (f == 1) f = 2;
            else f = 1;
            
        }
        
        
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << arr[i][j] << " ";
            }cout<<endl;
        }
        int tmp = 0, tmp2 = 0;
        for (int i=0;i<3;i++){
            tmp = 0; tmp2 = 0;
            int cnt = 0;
            int cnt2 = 0;
            for (int j=0;j<3;j++){
                if (arr[i][j] == 1) cnt ++;
                if (arr[j][i] == 1) cnt2 ++;
                
                if (arr[i][j] == 0) tmp++;
                if (arr[j][i] == 0) tmp2++;
            }
            
            printf("%d %d %d %d\n", cnt, tmp, cnt2, tmp2);
            if ((tmp == 0 && cnt == 0 ) || (tmp2 == 0 && cnt2 == 0)){
               
                return "B";
            }else if ((tmp == 0 && cnt == 3) || (tmp2 == 0 && cnt2 == 3)){
                cout << "hey2\n";
                return "A";
            }
        }
        int cnt = 0; tmp = 0;  
        
        for (int i=0;i<3;i++){
            if (arr[i][2-i] == 1) cnt++;
            if (arr[i][2-i] == 0) tmp ++;
        }
        if (tmp == 0){
            if (cnt == 0){
                cout << "hey3\n";
                return "B";
            }else if (cnt == 3){
                cout << "hey4\n";
                return "A";
            }
        }
        
        
        cnt = 0;tmp = 0;
        for (int i=0;i<3;i++){
            if (arr[i][i] == 1) cnt++;
            if (arr[i][i] == 0)tmp++;
        }
        if (tmp == 0){
            if (cnt == 0){
                cout << "hey5\n";
                return "B";
            }else if (cnt == 3){
                cout << "hey6\n";
                return "A";
            }
        }
        
        if (moves.size() != 9) return "Pending";
        else return "Draw";
        
        
        
        
    }
};