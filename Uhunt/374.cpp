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
#include<climits>
#include<set>
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

ll mode(ll x, ll y, ll mod){
     if (y == 0) return 1;
     ll z = mode(x,y/2,mod)%mod;
     if (y%2 == 1){
          return(z*z*(x%mod))%mod;
     }
     return (z*z)%mod;
}
int main(int argc, char const *argv[])
{
	ll b,p,m,r;
	while (scanf("%lld%lld%lld\n",&b,&p,&m) == 3){
          ll r = mode(b,p,m);
          printf("%lld\n",r);
     }

	return 0;
}
