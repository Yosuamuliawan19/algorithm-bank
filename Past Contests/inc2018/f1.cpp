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
int n, q;
bool vis[60];
vector<int> adj[60];
int len;
bool flag = 0;
void dfs(int idx, int cnt){
     // cout << idx << endl;
     if (flag) return;
     if (cnt >= len){
          flag = 1;
          return ;
     }
     for (int i=0;i<adj[idx].size();i++){
          int val = adj[idx][i];
          if (!vis[val]){
               vis[val] = 1;
               dfs(idx+1, cnt+1);
               vis[val] = 0;
          }
     }
}
int main()
{
     string input, cur;
	scanf("%d%d\n",&n,&q);
     vector<set<char> > v(n);
     for (int i=0;i<n;i++){
          getline(cin, input);
          stringstream ss(input);
          while (ss >> cur){
               v[i].insert(cur[0]);
          }
     }

     for (int i=0;i<q;i++){
          getline(cin, input);
          // cout << input << endl;
          len = input.length();
          flag = 0;
          for (int j=0;j<len;j++){
               adj[j].clear();
               for (int k=0;k<n;k++){
                    if (v[k].count(input[j])){
                         adj[j].pb(k);
                    }
               }
          }
          dfs(0,0);
          if (flag){
               printf("YES\n");
          }else{
               printf("NO\n");
          }

     }

	return 0;
}
