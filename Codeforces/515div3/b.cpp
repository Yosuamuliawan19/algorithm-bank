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
int sz;
int n, r, ans = INT_MAX, tmp;
vector<int> v;
void dp(int idx, int cnt){
     cout << v[idx] << " " << cnt << endl;
     if (v[idx] + r >= n){
          ans = min(ans , cnt);
     }
     for (int i=idx+1;i<sz;i++){
          if (v[i] > v[idx]+r) break;
          dp (i, cnt+1);
     }
}
int main()
{

     cin >> n >> r; r--;
     for (int i=0;i<n;i++){
          cin >> tmp;
          if (tmp) v.pb(i);
     }
     sz = v.size();

     dp(0, 0);



	return 0;
}
