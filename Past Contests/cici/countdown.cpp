// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
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
int tc,n,d,m,tree=1;
string tmp1, tmp2;
map<string,int> mp1;
map<int,string> mp2;
vector<int> adj[1010];
set<int> sett;
void dfs(int cur, int dep){
     if (dep == d) {
          // cout << mp2[cur] << endl;
          sett.insert(cur);
          return;
     }
     for (int i=0;i<adj[cur].size();i++){
          dfs(adj[cur][i], dep+1);
     }
}
bool cmp(pair<int,string> a , pair<int,string> b){
     if (a.fi == b.fi){
          return a.se < b.se;
     }else{
          return a.fi > b.fi;
     }
}
int main()
{


     cin >> tc;
     while (tc--){
          cin >> n >> d;
          for (int i=0;i<1010;i++) adj[i].clear();
          mp1.clear();
          mp2.clear();

          int tot = 0;
          for (int i=0;i<n;i++){
               cin >> tmp1 >> m;
               int x;
               if (mp1.find(tmp1) == mp1.end()){
                    x = tot ++;
                    // cout << tmp1 << " " << x << endl;
                    mp1[tmp1] = x;
                    mp2[x] = tmp1;
                }else{
                    x = mp1[tmp1];
               }
               // cout << mp2[x] << " "<< m << endl;
               for (int j=0;j<m;j++){
                    cin >> tmp2;
                    int y;
                    if (mp1.find(tmp2) == mp1.end()){
                         y = tot++;
                         // cout << tmp2 << " " << y << endl;
                         mp1[tmp2] = y;
                         mp2[y] = tmp2;
                    }else{
                         y = mp1[tmp2];
                    }
                    // cout << mp2[x] << /" push " << mp2[y] << endl;
                    adj[x].pb(y);
               }
          }
          // for (int i=0;i<tot;i++){
          //      cout << mp2[i] << " ->> ";
          //      for (int j=0;j<adj[i].size();j++){
          //           cout << " " << mp2[adj[i][j]];
          //      }cout << endl;
          // }
          vector<pair<int,string> > res;
          for (int i=0;i<tot;i++){
               sett.clear();
               dfs(i, 0);
               // cout << sett.size() << " "<< mp2[i]<< endl;
               if (sett.size() != 0){
                    res.pb(mp(sett.size(), mp2[i]));
               }
          }
          // cout << "---\n";
          sort(res.begin(), res.end(), cmp);
          cout << "Tree " << tree++ << ":\n";
          for (int i=0;i<3;i++){
               if (i >= res.size()) break;
               cout << res[i].se << " "<<res[i].fi<<endl;
               int nd = res[i].fi;
               if (i == 2){
                    while (i+1< res.size() && res[++i].fi == nd ){
                         cout << res[i].se << " " << res[i].fi << endl;                    }
               }
          }
          cout << endl;

     }
	return 0;
}
