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

int main()
{
     double n, t, d[2000], s[2000];
     double mins = INT_MAX;
     cin >> n >> t;
     for (int i=0;i<n;i++){
          cin >> d[i] >> s[i];
          // cout << d[i] << " " << s[i] << endl;
          mins = min(mins, s[i]);
     }
     double l = -mins, r = 1000000000;
     int iter = 0;
     while (1){
          iter ++; if(iter == 1000) break;


          double m = (l+r)/2;
          double tt = 0;
          for (int i=0;i<n;i++){
               tt += d[i]/(s[i]+m);
          }
          // cout << m << " " << tt << endl;

          if (tt >= t){
               l = m;
          }else{
               r = m;
          }
     }
     cout << fixed  << setprecision(9) << r << endl;

     return 0;
}
