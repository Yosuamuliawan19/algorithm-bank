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
ll tc, n, m;
char arr[30][30];
vector<pair<int,int> > ent;
bool f = 0;
void ff(int a, int b){
     if (f) return;
     arr[a][b] = '#';
     if (a == ent[1].fi && b == ent[1].se){
          f = 1;
          return;
     }
     for (int i=0;i<4;i++){
          int x = a+dirx[i], y = b+diry[i];
          if (x >=0 && x < n && y>=0&&y<m&&arr[x][y]=='.'){
               ff(x,y);
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          ent.clear();
          f = 0;
          cin >> n  >> m;
          // cout << n <<  " " << m << endl;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
                    if ((i == 0 || j == 0 || i == n-1 || j == m-1) && arr[i][j] == '.'){
                         ent.pb(mp(i,j));
                    }
               }
          }
          if (ent.size() == 2){
               ff(ent[0].fi, ent[0].se);
               // for (int i=0;i<n;i++){
               //      for (int j=0;j<m;j++){
               //           cout << arr[i][j];
               //      }cout << endl;
               // }
               if (arr[ent[1].fi][ent[1].se] == '#'){
                    cout << "valid\n";
               }else{
                    cout << "invalid\n";
               }
          }else{
               cout << "invalid\n";
          }
     }

     return 0;
}
