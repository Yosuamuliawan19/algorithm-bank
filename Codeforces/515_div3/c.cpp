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
ll n,cur;
char q;
int main()
{
     vector<ll> v1,v2;
     map<ll,pair<ll,ll> > m;

	cin >> n;
     for (int i=0;i<n;i++){
          cin >> q >> cur;
          if (q == 'L'){
               v1.pb(cur);
               m[cur] = mp(1,v1.size());
          }else if (q == 'R'){
               v2.pb(cur);
               m[cur] = mp(2,v2.size());
          }else{
               pair<ll,ll> now = m[cur];
               ll ans;
               if (now.fi == 1){
                    ans = min(v2.size()+now.se,
                              v1.size()-now.se);
               }else{
                    ans = min(v2.size()-now.se,
                              v1.size()+now.fi);
               }
               cout << ans << endl;
          }
     }

	return 0;
}
