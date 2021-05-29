#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
vector<vector<int> > arr;
ll color[210] = {0};
ll a, b, n, m;
ll dirx[4] = {1, -1, 0, 0};
ll diry[4] = {0, 0, 1, -1};
bool suc = 1;
void bicolor(ll cur, ll col){
     // cout << cur << " " << col << endl;
     if (!suc) return;
     color[cur] = col;

     ll nexcol = 1;
     if (col == 1) nexcol = 2;

     for (int i=0;i<arr[cur].size();i++){
          if (color[arr[cur][i]] == col){
               suc = 0;
               return;
          }else if (color[arr[cur][i]] == 0){
               bicolor(arr[cur][i], nexcol);
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     while (cin >> n){
          if (!n) break;
          cin >> m;
          arr = vector<vector<int> > (n, vector<int>());
          memset(color, 0, sizeof(color));
          suc = 1;
          for (int i=0;i<m;i++){
               cin >> a >> b;
               arr[a].pb(b);
          }
          bicolor(0, 1);
          if (suc) cout <<"BICOLORABLE.\n";
          else cout << "NOT BICOLORABLE.\n";


     }


     return 0;
}
