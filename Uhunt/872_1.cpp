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
string elems;
vector<int> adjList[200];
bool vis[200];
vector<string> ans;
bool check(char c){
     for (int i=0;i<adjList[c].size();i++){
          if (vis[adjList[c][i]]) return 0;
     }
     return 1;
}
void dfs(string path){
     if (path.size() == elems.size()){
          string tmp = "";
          tmp += path[0];
          for (int i=1;i<path.size();i++){
               tmp += ' ';
               tmp += path[i];
          }
          tmp += "\n";
          ans.pb(tmp);
          return;
     }
     for (int i=0;i<elems.size();i++){
          if (!vis[elems[i]] && check(elems[i])){
               vis[elems[i]] = 1;
               dfs(elems[i] + path);
               vis[elems[i]] = 0;
          }
     }
}

int main(int argc, char const *argv[])
{
	int tc;
     string s;
	cin >> tc;
     cin.ignore();
     int t = 1;
     while (tc--){
          cin.ignore();
          ans.clear();
          for (int i=0;i<200;i++){
               adjList[i].clear();
          }
          elems = "";
          getline(cin, s);
          for (int i=0;i<s.length();i++){
			if (s[i] != ' ') {
				elems += s[i];
			}
		}
          getline(cin, s);
          // cout << elems << endl;
		for (int i=0;i<s.length();i++){
			if (s[i] == '<'){
				adjList[s[i+1]].pb(s[i-1]);
			}
		}
          memset(vis,0,sizeof(vis));
          dfs("");
          if (t!= 1) cout <<"\n";
          t++;
          if (ans.size() == 0){
               cout << "NO\n";
          }else{
               sort(ans.begin(), ans.end());
               for (int i=0;i<ans.size();i++){
                    cout << ans[i];
               }
          }
     }

	return 0;
}
