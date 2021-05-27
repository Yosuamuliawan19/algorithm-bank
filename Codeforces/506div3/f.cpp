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
const int sz = 10000010;
int isPrime[sz];
vector<ll> plist;
void sieve(){
     for (int i=0;i<sz;i++) isPrime[i] = 1;
     isPrime[0]=isPrime[1]=0;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               plist.pb(i);
               for (int j=i*2;j<sz;j+=i) isPrime[j] = 0;
          }
     }
}

int main(int argc, char const *argv[])
{
     sieve();
	ll a, b;
     scanf("%lld %lld", &a, &b);
     a += b;
     ll mn = LLONG_MAX;
     ll diff = LLONG_MAX;
     for (int j=0;j<plist.size();j++){
          int i = plist[j];
          // cout << i << endl;
          if (a % i == 0){
               ll cur = (i*2) + ((a/i)*2);
               if (cur < mn){
                    mn = cur;
                    if (diff < abs(i-(a/i))) {
                         break;
                    }
                    diff = abs(i-(a/i));
               }
          }
     }
     printf("%lld\n", mn);
	return 0;
}
