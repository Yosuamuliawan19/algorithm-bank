// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int tc,n,m,t=1;
const int sz = 110;
char arr[sz][sz];
vector<pair<int,int> > v;
bool vis[26] = {0};
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
void ff(int x, int y){
     vis[(arr[x][y] - 'a')] = 1;
     // if (arr[x][y] != '.')
     // cout << arr[x][y] << endl;
     arr[x][y] = '#';
     for (int i=0;i<4;i++){
          int a = x+dx[i], b =y+dy[i];
          if (a >=0 && a <n && b >= 0 && b < m && arr[a][b] != '#'){
               ff(a,b);
          }
     }
}
int main()
{
     cin >> tc;
     while (tc--){
          v.clear();
          cin >> n >> m;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
                    if (arr[i][j] != '.' && arr[i][j] != '#'){
                         v.pb(mp(i,j));
                    }
               }
          }
          int conf = 0, ans[26] = {0};
          cout << "Case " << t++ << ":\n";
          for (int i=0;i<v.size();i++){
               memset(vis, 0, sizeof(vis));
               // cout << arr[v[i].fi][v[i].se] << endl;
               if (arr[v[i].fi][v[i].se] == '#') continue;
               ff(v[i].fi, v[i].se);
               int cnt = 0, found = 0;
               for (int j=0;j<26;j++){
                    if (vis[j]){
                         cnt++;
                         found = j;
                    }
               }
               // cout << cnt << " - " << found << endl;
               if (cnt > 1) conf ++;
               else ans[found] ++;
          }
          for (int i=0;i<26;i++){
               if (ans[i] > 0){
                    cout << (char)(i+'a') << " "<< ans[i] << endl;
               }
          }
          cout << "contested " <<  conf << endl;

     }


	return 0;
}
