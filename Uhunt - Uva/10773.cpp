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



int main(int argc, char const *argv[])
{
	int tc;
     double d,u,v;
     cin >> tc;
     for (int t=1;t<=tc;t++){
          cin >> d >> v >> u;
          // cout << << u << v;
          cout << "Case " << t <<": ";
          if (u > v && v!=0){
               cout << fixed << setprecision(3) << (d/sqrt(u*u-v*v)) - (d/u) << endl;
          }else{
               cout << "can't determine\n";
          }
     }

	return 0;
}
