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
     int n, mon, m, cur;
     cin >> n >> mon;
     vector<int> res;
     for (int i=0;i<n;i++){
          cin >> m;
          // cout << m << endl;
          bool f = 0;
          for (int j=0;j<m;j++){
               cin >> cur;
               if (mon > cur) f = 1;
          }
          if (f){
               res.pb(i+1);
          }
     }
     cout << res.size()<<endl;
     for (int i=0;i<res.size();i++){
          if (i != 0) cout << " ";
          cout << res[i];
     }
     cout << endl;


	return 0;
}
