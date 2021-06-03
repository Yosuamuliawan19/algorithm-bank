#include<bits/stdc++.h>
#define pii pair<int,int>
#define piii pair<pair<int, int> ,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
ll dirx[8] = {1, -1, 1, -1, 2, 2,  -2, -2};
ll diry[8] = {2, 2, -2, -2, 1, -1, 1, -1};
ll sx, sy, ex, ey, tc;
bool f = 0;
string s, e;
void bfs(){
     queue<piii > q;
     map<pair<int,int>, bool > vis;
     q.push(mp(mp(sx, sy), 0));
     while (!q.empty()){
          piii cur = q.front();q.pop();
          vis[mp(cur.fi.fi,cur.fi.se)] = 1;
          if (cur.fi.fi == ex && cur.fi.se == ey){
               cout << cur.se  << "\n";
               // cout << "found\n";
               break;
          }
          // cout << cur.fi << " " << cur.se << endl;
          for (int i=0;i<8;i++){
               ll x = cur.fi.fi + dirx[i], y = cur.fi.se + diry[i];
               if (x >= 0 && x < 8 && y >= 0 && y < 8 && vis.find(mp(x,y)) == vis.end()){
                    q.push(mp(mp(x, y), cur.se +1));
               }
          }
     }

}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> s >> e;
          sx = s[0]-'a', sy = s[1]-'1';
          ex = e[0]-'a', ey = e[1]-'1';
          // cout << sx << " " << sy << " " << ex << " " << ey << endl;

          bfs();
     }

     return 0;
}
