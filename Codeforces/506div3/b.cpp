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
const int sz = 500010;
int n, arr[sz];
int iter = 0;
int memo[sz] = {0};
int dp (int cur, int sum, int prev){
     if (cur == n || arr[cur] > 2*arr[prev] ) return sum;
     if (memo[cur] != -1) return memo[cur];
     int ret = INT_MIN;
     iter++;
     if (arr[cur] <= arr[prev]*2){
          ret = max(ret, dp(cur+1, sum+1, cur));
     }
     ret = max(ret, dp(cur+1, sum, prev));
     return memo[cur] = ret;
}
int main(int argc, char const *argv[])
{
     for (int i=0;i<sz;i++) memo[i] = -1;
     scanf("%d",&n);
     for (int i=0;i<n;i++){
          scanf("%d",&arr[i]);
     }
     int mx = INT_MIN;
     for (int i=0;i<n;i++){
          mx = max (dp(i+1, 1, i), mx);
     }
     cout << mx << endl;
     // cout << iter << endl;
	return 0;
}
