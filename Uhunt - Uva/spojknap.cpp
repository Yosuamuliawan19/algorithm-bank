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
int memo[3000][3000];
int sz[3000], val[3000];
int s, n;
int knap(int cap, int idx){

     if (idx > n || cap <= 0) return 0;
     if (memo[cap][idx] != -1) return memo[cap][idx];
     if (cap-sz[idx] >= 0) memo[cap][idx] = max(val[idx] + knap(cap-sz[idx], idx+1) , knap(cap,idx+1));
     else memo[cap][idx] = knap(cap, idx+1);
     // cout << cap << " "<< idx << " " << memo[cap][idx] << endl;
     return memo[cap][idx];
}
int main()
{
     memset(memo,-1,sizeof(memo));
     cin >> s >> n;
     for (int i=0;i<n;i++){
          cin >> sz[i] >> val[i];
     }
     int ans = knap(s,0);
     cout << ans << endl;


	return 0;
}
