#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,0,-1,1,0,-1,1,-1};
int main (){
     ll tc;
     string tmp;
     cin >> tc;
     while (tc--){
          cin.ignore();
          ll n; cin >> n;
          vector<string> board(n,"");
          vector<vector<int> > inp(n, vector<int>(n,-1));
          for (int i=0;i<n;i++){
               cin >> board[i];
          }
          bool touched = false;
          for (int i=0;i<n;i++){
               cin >> tmp;
               for (int j=0;j<n;j++){
                    if (tmp[j] != 'x') continue;
                    inp[i][j] = 0;
                    if (board[i][j] == '*'){
                         inp[i][j] = -2;
                         touched = true;
                         continue;
                    }
                    for (int k=0;k<8;k++){
                         int a = i+dx[k], b = j+dy[k];
                         if (a >= 0 && a < n && b >=0 && b < n){
                              if (board[a][b] == '*'){
                                   inp[i][j] ++;
                              }
                         }
                    }
               }
          }
          for (int i=0;i<n;i++){
               for (int j=0;j<n;j++){
                    if (inp[i][j] == -2 || (touched && board[i][j] == '*')){
                         cout << "*";
                    }else if (inp[i][j] == -1){
                         cout << '.' ;
                    }else{
                         cout << inp[i][j];
                    }
               }
               cout << endl;
          }
          if (tc!= 0) cout << endl;

     }


}
