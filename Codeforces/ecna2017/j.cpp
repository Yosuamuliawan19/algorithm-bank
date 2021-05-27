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

int a, b, use[10], rec[10], u, r, t;
vector<pair<int,pair<int,int> > > ppl;
int main(int argc, char const *argv[])
{
     int idx = 0;
	for (int i=0;i<10;i++){
          cin >> use[idx] >> rec[idx];
          idx++;
     }
     for (int i=0;i<10;i++){
          cin >> u >> r >> t;
          ppl.pb(mp(t,mp(u,r)));
          fin[i] = (t+u+r);
     }
     for (int j=0;j<3;j++){
          for (int j=0;i<10;i++){

          }
     }


     cout << ans << endl;
	return 0;
}

//
// 10 6 2 2 2 2 2 2 2 2 2 2
// 4 11 2 2 2 2 2 2 2 2 2 2
// 1 0  0 0 0 0 0 0 0 0 0 0
