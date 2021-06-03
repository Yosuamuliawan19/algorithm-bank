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
ll n, k,a,b;
int main()
{
     vector<pair<ll,ll> > v1, v2;
     cin >> n >> k;
     for (ll i=0;i<n;i++){
          cin >> a >> b;
          if (a < 0){
               v2.pb(mp(-1*a,b));
          }else if (a > 0){
               v1.pb(mp(a,b));
          }
     }
     ll ans = 0;
     sort(v1.begin(),v1.end(), greater<pair<ll,ll> >());
     sort(v2.begin(),v2.end(), greater<pair<ll,ll> >());
     ll idx = 0;
     while (idx != v1.size()){
          if (v1[idx].se > k){
               ll times = floor((double)v1[idx].se/(double)k);
               v1[idx].se -= k*times;
               ans += (2*v1[idx].fi*times);
          }
          while (v1[idx].se != 0){
               ans += v1[idx].fi * 2;
               ll mail = k, nidx = idx;
               while (mail != 0){
                    if (v1[nidx].se >= mail){
                         v1[nidx].se -= mail;
                         break;
                    }else{
                         mail -= v1[nidx].se;
                         v1[nidx].se = 0;
                         nidx++;
                         if (nidx == v1.size()) break;
                    }
               }
          }
          idx++;
     }
     idx = 0;
     while (idx != v2.size()){
          if (v2[idx].se > k){
               ll times = floor((double)v2[idx].se/(double)k);
               v2[idx].se -= k*times;
               ans += (2*v2[idx].fi*times);
          }
          while (v2[idx].se != 0){
               ans += v2[idx].fi * 2;
               ll mail = k, nidx = idx;
               while (mail != 0){
                    if (v2[nidx].se >= mail){
                         v2[nidx].se -= mail;
                         break;
                    }else{
                         mail -= v2[nidx].se;
                         v2[nidx].se = 0;
                         nidx++;
                         if (nidx == v2.size()) break;
                    }
               }
          }
          idx++;
     }
     cout << ans << endl;


	return 0;
}
