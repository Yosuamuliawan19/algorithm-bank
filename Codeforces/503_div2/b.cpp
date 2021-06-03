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
int n, arr[1010], res[1010], tmp;
bool vis[1010];
int dfs(int cur){
     int nxt = arr[cur];
     if (vis[nxt]) return nxt;
     vis[nxt] = 1;
     return dfs(nxt);
}
int main(int argc, char const *argv[])
{
     for (int i=0;i<1010;i++) res[i] = -1;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> tmp;
          arr[i] = tmp-1;
     }
     for (int i=0;i<n;i++){
          memset(vis, 0, sizeof(vis));
          vis[i] = 1;
          res[i] = dfs(i);
     }
     for (int i=0;i<n;i++){
          if (i!=0) cout << " ";
          cout << res[i]+1;
     }
     cout<<endl;
	return 0;
}
