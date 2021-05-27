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

const int sz = 6000;
int b[sz],c[sz],ans[sz],n,m,tmp;
vector<pair<int,int> > dep;
bool cmp (pair<int,int> a, pair<int,int> b) {
     return a.fi > b.fi;
}

int main(int argc, char const *argv[])
{
     cin >> n >> m;
     for (int i=0;i<n;i++){
          cin >> tmp;
          dep.pb(mp(tmp, i));
     }
     for (int i=0;i<m;i++){
          cin >> b[i];
     }
     for (int i=0;i<m;i++){
          cin >> c[i];
     }
     sort(dep.begin(), dep.end(), cmp);
     bool f = 1;
     for (int i=0;i<n;i++){
          // cout << dep[i].fi << " " <<dep[i].se << endl;
          int mincost = INT_MAX, minidx = -1;
          for (int j=0;j<m;j++){
               if (b[j] >= dep[i].fi && mincost > c[j]){
                    mincost = c[j];
                    minidx = j;
               }
          }
          if (minidx == -1){
               f = 0; break;
          }
          b[minidx] = 0;
          ans[dep[i].se] = minidx;
     }
     if (f){
          for (int i=0;i<n;i++){
               cout << ans[i]+1 << " ";
          }cout << endl;
     }else{
          cout << "impossible\n";
     }
	return 0;
}
