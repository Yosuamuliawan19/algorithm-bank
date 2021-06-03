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

bool cmp1(pair<ll,ll> a, pair<ll,ll> b){
     if (a.fi == b.fi){
          return a.se < b.se;
     }else return a.fi > b.fi;
}
bool cmp2(pair<ll,ll> a, pair<ll,ll> b){
     if (a.se == b.se){
          return a.fi > b.fi;
     }else return a.se < b.se;
}

int main(int argc, char const *argv[])
{
	ll n, a, b;
     vector<pair<ll,ll> > v1,v2;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> a >> b;
          v1.pb(mp(a,b));
          v2.pb(mp(a,b));
     }
     sort(v1.begin(), v1.end(), cmp1);
     sort(v2.begin(), v2.end(), cmp2);
     ll p1 = (v2[0].se - v1[1].fi) ;
     ll p2 = (v2[1].se - v1[0].fi);
     p1 = max(p1, p2);
     if (v2[0].fi == v1[0].fi && v2[0].se == v1[0].se ){
          p1 = max(p1, (v2[1].se - v1[1].fi));
     }
     if (p1 < 0) p1 = 0;
     cout << p1 << endl;
	return 0;
}
