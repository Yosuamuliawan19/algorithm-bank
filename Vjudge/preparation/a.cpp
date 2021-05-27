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
bool found = 0;
vector<bool> vis(201, 0);
vector<int> adj[201];
string s1,s2,tmp;
map<string, int> mapp;

void dfs(int cur, int dest){
     // cout << cur <</ endl;
     if (cur == dest){
          found = 1;
          return ;
     }
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               dfs(nxt, dest);
          }
     }
}

int main(int argc, char const *argv[])
{

     int cnt = 0;
	int n, m;
     cin >> n >> m ;
     for (int i=0;i<n;i++){
          cin >> s1;
          if (mapp.find(s1) == mapp.end()) mapp[s1] = cnt++;
          for (int j=0;j<3;j++) cin >> tmp;
          cin >> s2;
          if (mapp.find(s2) == mapp.end()) mapp[s2] = cnt++;
          adj[mapp[s2]].pb(mapp[s1]);
     }
     for (map<string,int>::iterator it=mapp.begin();it!=mapp.end();it++){
          // cout << it->first << " " << it->second << endl;
     }
     for (int i=0;i<m;i++){
          cin >> s1;
          if (mapp.find(s1) == mapp.end()) mapp[s1] = cnt++;
          for (int j=0;j<3;j++) cin >> tmp;
          cin >> s2;
          if (mapp.find(s2) == mapp.end()) mapp[s2] = cnt++;
          dfs(mapp[s2], mapp[s1]);
          // cout << mapp[s1] << " --  " << mapp[s2] << endl;
          if (found){
               cout << "Fact\n";
          }else{
               dfs(mapp[s1], mapp[s2]);
               if (found){
                    cout << "Alternative Fact\n";
               }else{
                    cout << "Pants on Fire\n";
               }
          }
          found = 0;
          // cout << "----\n";
     }


	return 0;
}
