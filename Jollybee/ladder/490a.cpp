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
ll n, tmp;
vector<ll> v[3];
int main()
{
	cin >> n;
     for (int i=0;i<n;i++){
          cin >> tmp;
          v[tmp-1].pb(i+1);
     }
     ll sz = LLONG_MAX;
     for (int i=0;i<3;i++){
          sz = min(sz, (ll) v[i].size());
     }
     cout << sz << endl;
     for (int i=0;i<sz;i++){
          for (int j=0;j<3;j++){
               cout << v[j][i];
               if (j!=2) cout << " ";
          }
          cout << endl;
     }



	return 0;
}
