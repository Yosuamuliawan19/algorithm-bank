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
const ll sz = 10000100;
ll st[4*sz] = {0}, lazy[4*sz] = {0};
set<ll> sett;
void update(ll node, ll start, ll end, ll l, ll r, ll val){
     if (lazy[node] != 0){
          st[node] = lazy[node];
          if (start != end){
               lazy[node*2] = lazy[node];
               lazy[node*2+1] = lazy[node];
          }
          lazy[node] = 0;
     }
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r){
          st[node] = val;
          if (start != end){
               lazy[node*2] = val;
               lazy[node*2+1] = val;
          }
     }
     ll mid = (start+end)/2;
     update(node*2,start,mid,l,r,val);
     update(node*2+1,mid+1,end,l,r,val);
}



ll tc, n, a, b;
int main()
{
	scanf("%lld",&tc);
     while (tc--){
          scanf("%lld",&n);
          for (int i=0;i<=4*n;i++){
               st[i] = 0;
               lazy[i] = 0;
          }
          sett.clear();
          for (int i=0;i<n;i++){
               scanf("%lld%lld",&a,&b);
          }

     }

	return 0;
}
