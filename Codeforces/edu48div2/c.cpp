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
#include<set>
#include<queue>
#include<string>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int sz = 100050;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
ll n, sec = 0;
ll arr[2][sz] = {0};
ll vis[2][sz] = {0};
ll mx = -1;
ll iter = 0;
ll memo[2][sz][2] = {0};
ll dfs(ll x, ll y, ll t, ll fl){
     if (t > n) fl = 1;
     if (memo[x][y][fl] != -1) return memo[x][y][fl];
     if (t == (n*2)-1) return t*arr[x][y];
     ll ret = -1;
     for (int i=0;i<8;i++){
          int a=x+dx[i], b=y+dy[i];
          if (a>=0&&a<2&&b>=0&&b<n && !vis[a][b]){
               vis[a][b] = 1;
               ret = max(dfs(a,b,t+1,fl), ret);
               vis[a][b] = 0;
          }
     }
     cout << ret << " " <<  x << " " << y <<" " << fl << " " << t <<  endl;
     return memo[x][y][fl] = ret+(t*arr[x][y]);
}

int main(int argc, char const *argv[])
{
	cin >> n;
     for (int i=0;i<n;i++) cin >> arr[0][i];
     for (int i=0;i<n;i++) cin >> arr[1][i];
     for (int i=0;i<sz;i++){
          for (int j=0;j<2;j++){
               memo[0][i][j] = -1;
               memo[1][i][j] = -1;
          }
     }
     vis[0][0] = 1;
     cout << dfs(0,0,0,0) << endl;
     // cout << "iter  = " << iter << endl;
	return 0;
}
