#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
ll dirx[4] = {1, -1, 0, 0};
ll diry[4] = {0, 0, 1, -1};
ll n, m, sx, sy, sz = 0, mxsz = 0;
char arr[30][30], land;
void ff (ll curx, ll cury, char c){
     arr[curx][cury] = c+1; sz ++;
     for (int i=0;i<4;i++){
          ll x = curx + dirx[i], y = cury + diry[i];
          if (y == m){
               y = 0;
          }else if (y == -1){
               y = m-1;
          }
          if (arr[x][y] == c){
               ff(x, y, c);
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     while (cin >> n >> m){
          mxsz = 0;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
               }
          }
          cin >> sx >> sy;
          land = arr[sx][sy];
          ff(sx,sy, land);
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    if (arr[i][j] == land){
                         sz = 0;
                         ff(i,j,land);
                         if (sz > mxsz) mxsz = sz;
                    }
               }
               }
           cout << mxsz << "\n";
     }
     return 0;
}