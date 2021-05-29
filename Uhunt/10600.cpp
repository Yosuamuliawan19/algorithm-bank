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

vector<pair<double,pair<int,int> > > edges;
vector<int> parent;
int findParent(int x){
     return parent[x]==x?x:parent[x]=findParent(parent[x]);
}
bool sameSet(int a, int b){
     return findParent(a) == findParent(b);
}
void unify(int a, int b){
     a = findParent(a); b = findParent(b);
     if (a > b){
          parent[b] = a;
     }else{
          parent[a] = b;
     }
}
int main(int argc, char const *argv[])
{
	int tc,n,m,a,b,x;
	cin >> tc;
     while (tc--){
          cin >> n >> m;
          edges.clear();
          parent = vector<int>(n+1);
          for (int i=1;i<=n;i++) parent[i] = i;
          for (int i=0;i<m;i++){
               cin >> a >> b >> x;
               edges.pb(mp(x,mp(a,b)));
          }
          sort(edges.begin(), edges.end());
          // make mst
          vector<int> mst;
          int cost = 0;
          for (int i=0;i<m;i++){
               int a = edges[i].se.fi , b = edges[i].se.se;
               if (!sameSet(a,b)){
                    unify(a,b);
                    mst.pb(i);
                    cost += edges[i].fi;

               }
          }
          int cost2 = INT_MAX;
          // brute force;
          for (int i=0;i<mst.size();i++){
               int cur = 0;
               // reset parent
               for (int j=1;j<=n;j++) parent[j] = j;
               int cnt = 0;
               for (int j=0;j<m;j++){
                    int a = edges[j].se.fi , b = edges[j].se.se;
                    if (!sameSet(a,b) && j != mst[i]){
                         unify(a,b);
                         cnt ++;
                         cur += edges[j].fi;
                    }
               }
               if (cnt == n-1)
               cost2 = min(cur, cost2);
          }
          cout << cost << " " << cost2 << endl;
     }
	return 0;
}
