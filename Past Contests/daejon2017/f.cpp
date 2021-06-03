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

pair<ll,ll> rec(ll val, ll pw){
     cout << val << " --- "<< pw << endl;
     if (pw == 1){
          if (val == 1) return mp(1,1);
          else if (val == 2) return mp(1,2);
          else if (val == 3) return mp(2,2);
          else return mp(2,1);
     }
     ll add = pow(2,pw-1);
     ll nxt = add * add;
     ll cur = 0, q = 1;
     for (int i=1;i<=4;i++){
          cout << cur << " " << val << " " << cur +nxt << endl;
          if (val > cur && val <= cur+nxt){
               val -= cur;
               q = i; break;
          }
          cur += nxt;
     }
     cout << "q == "<<  q << endl;
     pair<ll,ll> ret = rec(val, pw-1);
     if (q == 1 ){
          // int tmp = ret.fi;
          // ret.fi = ret.se;
          // ret.se = tmp;
          if (q == 4) ret.fi += add;
     }else{
          ret.se += add;
          if (q == 3) ret.fi += add;
     }
     return ret;
}

int main(int argc, char const *argv[])
{
	ll n, k;
     cin >> n >> k;
     pair<ll,ll> ans = rec(k, log2(n));
     cout << ans.fi <<" " << ans.se << endl;
	return 0;
}
