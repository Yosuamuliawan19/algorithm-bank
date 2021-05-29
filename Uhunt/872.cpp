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
using namespace std;

typedef long long ll;
typedef pair<long long, long long> pll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

vector<int> adjList[30];
vector<pair<int,int> > ans;
bool vis[30];
int elems;
map<char, int> m;
map<int, char> m2;
void dfs(int cur, int depth){
	for (int i=0;i<adjList[cur].size();i++){
		int nxt = adjList[cur][i];
		if (!vis[nxt]){
			vis[cur] = 1;
			dfs(nxt , depth+1);
			vis[cur] = 0;
		}
	}
	
}

void print(){
	// sort(ans.begin(), ans.end());
	// for (int j=0;j<ans.size();j++){
	// 	cout<< ans[j].first << " " <<  m2[ans[j].second] << endl;
	// }
}
int main(int argc, char const *argv[])
{
	ll tc, idx = 0;
	string s;
	cin >> tc;
	cin.ignore();

	while (tc--){
		cin.ignore();
		m.clear();
		m2.clear();
		for (int i=0;i<30;i++) adjList[i].clear();
		getline(cin, s);
		cout << s << endl;
		elems = 0;
		for (int i=0;i<s.length();i++){
			if (s[i] != ' ') {
				m[s[i]] = idx++;
				m2[idx-1] = s[i];
				elems ++;
			}
		}
		getline(cin, s);
		for (int i=0;i<s.length();i++){
			if (s[i] == '<'){
				adjList[m[s[i-1]]].pb(m[s[i+1]]);
				// cout << m[s[i-1]] << " " << m[s[i+1]] << "\n";
			}
		}
		memset(vis,0,sizeof(vis));
		ans.clear();
		for (int i=0;i<idx;i++){
			dfs(i, 0);
		}
		print();
	}

	return 0;
}
