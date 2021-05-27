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

const int sz = 10000;
int b[sz],c[sz],q[sz], ans[sz];
vector<pair<int,int> > dep;
int n, m, tmp;
int main(int argc, char const *argv[])
{
     cin >> n >> m;
     for (int i=0;i<n;i++) {
          cin >> tmp;
          dep.pb(mp(tmp, i));
     }
     for (int i=0;i<m;i++) cin >> b[i];
     for (int i=0;i<m;i++) cin >> c[i];
     sort(dep.begin(), dep.end());
     for (int i=0;i<n;i++){
          int cur = dep[i].fi;
          // cout << dep[i].fi << " " <<dep[i].se << endl;
          int mncost = INT_MAX, mnidx = -1;
          for (int j=0;j<m;j++){
               if (b[j] >= cur && c[j] < mncost){
                  mncost = c[j];
                  mnidx = j;
             }
          }
          if (mnidx == -1 || mncost == INT_MAX){
               cout << "impossible\n"; return 0;
          }
          ans[dep[i].se] = mnidx+1;
          b[mnidx] = 0;
     }
     for (int i=0;i<n;i++){
          cout << ans[i] << " ";
     }cout <<endl;

	return 0;
}
