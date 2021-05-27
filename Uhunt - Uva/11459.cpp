#include<iostream>
#include<vector>

using namespace std;
int main (){
     int tc, a, b, c;
     cin >> tc;
     int t = 0;
     while (tc--){
          t++;
          cin >> a >> b >> c;
          vector<int> board(101,-1);
          vector<int> ppl(a,1);
          int x, y;
          for (int i=0;i<b;i++){
               cin >> x >> y;
               board[x] = y;
          }
          int turn = 0;
          bool end = false;
          for (int i=0;i<c;i++){
               cin >> x;
               if (end) continue;
               ppl[turn] += x;
               if (ppl[turn] >= 100) {
                    ppl[turn] = 100;
                    end = true;
               }
               if (board[ppl[turn]] != -1){
                    ppl[turn] = board[ppl[turn]];
               }
               if (ppl[turn] >= 100) {
                    ppl[turn] = 100;
                    end = true;
               }
               turn ++;
               if (turn == a) turn = 0;
          }
          for (int i=0;i<a;i++){
               cout << "Position of player "<< i+1 <<" is "<< ppl[i] <<".\n";
          }
     }



     return 0;
}
