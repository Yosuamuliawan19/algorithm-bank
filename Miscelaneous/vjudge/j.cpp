#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
char symbol = 'a';
char c;
ll dirx[4] = {1, -1, 0, 0};
ll diry[4] = {0, 0, 1, -1};
int arr[1010][1010], n, m, sx, sy, ex, ey, q;
char arr2[1010][1010] = {0};

void ff(ll i, ll j){
     arr2[i][j] = symbol;
     for (int dir=0;dir<4;dir++){
          ll x = i + dirx[dir], y = j + diry[dir];
          if (x >= 0 && x < n && y >= 0 && y < m && arr2[x][y]==0 && arr[i][j] == arr[x][y]){
               ff(x, y);
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> c ;
               arr[i][j] = c-'0';
          }
     }

     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr2[i][j] == 0){
                    symbol++;
                    ff(i, j);
                    // cout << symbol << endl;
               }
          }
     }
     cin >> q;
     while (q--){
          cin >> sx >> sy >> ex >> ey;
          sx--;sy--;ex--;ey--;
          if (arr2[sx][sy] != arr2[ex][ey]){
               cout << "neither\n";
          }else if (arr[sx][sy] == 0){
               cout << "binary\n";
          }else{
               cout << "decimal\n";
          }
     }
     // for (int i=0;i<n;i++){
     //      for (int j=0;j<m;j++){
     //           cout << arr2[i][j] ;
     //      }cout << endl;
     // }


     return 0;
}
