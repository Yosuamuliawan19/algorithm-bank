#include<iostream>
// #include<stdio.h>
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
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

int n, x, y, idx = 0;
map<pair<int,int>, bool > mapp;
vector<pair<int,int> > nodes;
vector<pair<int, pair<int,int > > > dist;
vector<int> parent;
int man(int x, int y){
     int ret = abs(nodes[x].fi - nodes[y].fi) + abs(nodes[x].se - nodes[y].se);
     return ret;
}
int findParent(int x){
     return parent[x] == x ? x : parent[x] = findParent(parent[x]);
}
bool sameSet(int x, int y){
     return findParent(x) == findParent(y);
}
void unify(int x, int y){
     x = findParent(x);
     y = findParent(y);
     if (x > y){
          parent[y] = x;
     }else{
          parent[x] = y;
     }
}
int main(int argc, char const *argv[])
{


     scanf("%d", &n);
     for (int i=0;i<n;i++){
          parent.pb(i);
     }
     for (int i=0;i<n;i++){
          scanf("%d %d", &x, &y);
          if (mapp.find(mp(x,y)) == mapp.end()){
               nodes.pb(mp(x,y));
               int now = nodes.size()-1;
               // cout << now << " " << x << " " << y << endl;
               for (int i=0;i<nodes.size()-1;i++){
                    dist.pb(mp(man(i, now), mp(i, now)));
               }
          }
          mapp[mp(x,y)] = 1;
     }
     // cout << dist.size() << endl;
     sort(dist.begin(),dist.end());
     int ans = 0;
     for (int i=0;i<dist.size();i++){
          if (!sameSet(dist[i].se.fi, dist[i].se.se)){
               // cout << dist[i].fi << " " << dist[i].se.fi << " " << dist[i].se.se << endl;
               unify(dist[i].se.fi, dist[i].se.se);
               ans += dist[i].fi;
          }
     }
     cout << ans << endl;

	return 0;
}
