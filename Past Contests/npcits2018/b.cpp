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
ll fibo[100];
ll tc, n;
map <ll, bool> mapp;
const int mod = 1000000007;
void fib(){
     fibo[0] = 1; fibo[1] = 1;
     mapp[1] = 1;
     for (int i=2;i<100;i++){
          fibo[i] = (fibo[i-1] + fibo[i-2])%mod;
          if (fibo[i] > 100000000) {
               break;
          }
          mapp[fibo[i]] =1;
     }
}
ll fast(ll x){
     if (x == 0) return 1;
     if (x == 1) return 2;
     ll ret = (fast(x/2)) % mod;
     if (x % 2 == 0) return (ret * ret)%mod;
     else return (((ret * ret) % mod) * 2)%mod;
}
int main(int argc, char const *argv[])
{
     fib();
	scanf("%lld", &tc);
     while (tc--){
          scanf("%lld", &n);
          if (n > 10 && mapp.find(n) != mapp.end()){
               printf("YEY\n");
               continue;
          }
          ll ans = (2 + fast(n+1))%mod ;
          printf("%lld\n", ans);
     }
	return 0;
}
