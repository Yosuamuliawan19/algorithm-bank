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
ll memo[60][110];
ll peso[60][110];
ll packet[60][110];
ll sz[110], val[110];
ll s, n;
ll weight;
ll knap(ll cap, ll idx){
     if (idx > n || cap <= 0) {
          return 0;
     }
     if (memo[cap][idx] != -1) return memo[cap][idx];
     ll without =  knap(cap, idx+1), with;
     if (cap-sz[idx] >= 0) {
               with = val[idx] + knap(cap-sz[idx], idx+1);
     }else with = -1;
     if (with >= without){
          peso[cap][idx] = peso[cap-sz[idx]][idx+1] + sz[idx];
          packet[cap][idx] = packet[cap-sz[idx]][idx+1] + 1;
          // cout << cap << " " << idx << " " << packet[cap][idx] << endl;
          return memo[cap][idx] = with;
     }else{
          peso[cap][idx] = peso[cap][idx+1];
          packet[cap][idx] = packet[cap][idx+1];
          // cout << cap << " " << idx << " " << packet[cap][idx] << endl;
          return memo[cap][idx] = without;
     }
}
int main()
{
     ll tc;
     scanf("%lld",&tc);
     while (tc--){
          for (ll i=0;i<60;i++){
               for (ll j=0;j<110;j++){
                    memo[i][j] = -1;
                    packet[i][j] = 0;
                    peso[i][j] = 0;
               }
          }
          scanf("%lld",&n);
          for (ll i=0;i<n;i++) scanf("%lld %lld",&val[i],&sz[i]);
          ll ans = knap(50, 0);

          printf("%lld brinquedos\n", ans);
		printf("Peso: %lld kg\n", peso[50][0]);
		printf("sobra(m) %lld pacote(s)\n\n",n- packet[50][0]+1);
     }


	return 0;
}
