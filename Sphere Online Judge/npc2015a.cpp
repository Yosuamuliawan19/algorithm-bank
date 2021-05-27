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
char s[20000100];
ll n;
ll x, y;
char c1, c2;
vector<pair<ll,ll> > v(26, mp(LLONG_MAX, LLONG_MIN));

int main(int argc, char const *argv[])
{

     scanf("%s", s);
     scanf("%lld\n", &n);
     ll len = strlen(s);
     for (ll i=0;i<len;i++){
          v[s[i]-'A'].fi = min(i, v[s[i]-'A'].fi);
          v[s[i]-'A'].se = max(i, v[s[i]-'A'].se);
     }
     for (ll i=0;i<n;i++){
          scanf("%c %c\n", &c1, &c2);
          if (v[c1-'A'].fi < v[c2-'A'].se){
               printf("YA\n");
          }else{
               printf("TIDAK\n");
          }
     }

	return 0;
}
