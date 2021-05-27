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

int main()
{
     int n,p,q;
     vector<pair<int,int> > v;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> p >> q;
          v.pb(mp(p,q));
     }
     sort(v.begin(),v.end());
     int mxp = v[0].fi, mxq = v[0].se;
     bool suc = 1;
     for (int i=1;i<n;i++){
          if (v[i].fi > mxp && v[i].se < mxq){
               suc = 0;
          }
          mxp = max(mxp, v[i].fi);
          mxq = max(mxq, v[i].se);
     }
     if (suc){
          cout << "Poor Alex\n";
     }else{
          cout << "Happy Alex\n";
     }


	return 0;
}
