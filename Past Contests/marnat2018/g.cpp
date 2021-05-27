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
const int sz = 100100;
int tc, n, arr[sz];
int iter = 0;
int memo[sz];
int dp (int cur, int val){
     // cout << cur << " " << val /< endl;
     if (cur >= n-1) return val;
     if (memo[cur] != -1 && memo[cur] >= val){
          return 0;
     }
     memo[cur] = val;
     // iter++;
     int lim = min(n, cur+5);
     int ret = val;
     for (int i=cur+2; i < lim; i++){
          ret = max(dp (i , val +  arr[i]), ret);
     }
     return ret;
}
int main(int argc, char const *argv[])
{

	scanf("%d", &tc);
     int t = 1;
     while (tc--){
          scanf("%d", &n);
          for (int i=0;i<n+5;i++) memo[i] = -1;
          for (int i=0;i<n;i++){
               scanf("%d", &arr[i]);
          }
          int ans = 0;
          for (int i=1;i<n;i++){
               if (i >= 5) break;
               ans = max(ans, dp(i, arr[i]));
          }
          // cout << iter << endl;
          iter = 0;
          printf("Case %d: %d\n", t++, ans);
     }

	return 0;
}
