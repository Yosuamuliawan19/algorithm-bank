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
vector<int> parent;
int findParent(int a){
     return (parent[a] == a ? a : parent[a] = findParent(parent[a]));
}
bool sameSet(int a,int b){
     return findParent(a) == findParent(b);
}
void unify(int a, int b){
     a = findParent(a);
     b = findParent(b);
     if (a > b){
          parent[b] = a;
     }else{
          parent[a] = b;
     }
}
vector<pair<double,pair<int,int> > > edges;
vector<pair<int,int> > locs;
int main(int argc, char const *argv[])
{
	int tc,s,m,x,y;
	cin >> tc;
     while (tc--){
          cin >> s >> m;
          edges.clear();
          locs.clear();
          parent.clear();
          for (int i=0;i<m;i++){
               cin >> x >> y;
               // cout << x << " " << y << endl;
               locs.pb(mp(x,y));
               parent.pb(i);
          }
          for (int i=0;i<m;i++){
               for (int j=i+1;j<m;j++){
                    // cout << i << " " << j << endl;
                    edges.pb(mp(
                    sqrt(
                    abs(locs[i].fi-locs[j].fi)*abs(locs[i].fi-locs[j].fi)
                    + abs(locs[i].se-locs[j].se)*abs(locs[i].se-locs[j].se)
                    ), mp(i,j)));
               }
          }
          stack<double> res;
          sort(edges.begin(), edges.end());
          // cout << "size " << edges.size() << endl;
          for (int i=0;i<edges.size();i++){
               // cout << i << endl;
               int a = edges[i].se.fi, b = edges[i].se.se;
               if (!sameSet(a,b)){
                    unify(a,b);
                    res.push(edges[i].fi);
               }
          }
          while (s!=1){
               s--;
               res.pop();
          }
          cout <<fixed << setprecision(2) << res.top() << endl;
     }
	return 0;
}
