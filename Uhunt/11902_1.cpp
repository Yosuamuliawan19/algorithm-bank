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

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define FOR(i,a,b) for(int i=a;i<=b;i++)

vi adjList[101];
bool vis[101];
int arr[101][101] = {0};
int dont;
ll tc, n, tmp;
void dfs(int cur, bool f, int test){
	vis[cur] = 1;
	arr[test][cur] = f;
	for (int i=0;i<adjList[cur].size();i++){
 		int nxt = adjList[cur][i];
		if (!vis[nxt] && nxt != dont){
			dfs(nxt, f, test);
		}
	}
}
void ph(){
	for (int i=0;i<n*2+1;i++){
		if (i == 0 || i == n*2){
			cout << "+";
		}else cout << "-";
	}
	cout << "\n";
}
void print(){
	for (int i=0;i<n;i++){
		ph();
		for (int j=0;j<n;j++){
			if (arr[i][j]){
				cout << "|Y";
			}else cout << "|N";
		}
		cout << "|\n";
	}
	ph();
}
int main(int argc, char const *argv[])
{

	cin >> tc;
	for (int t=1;t<=tc;t++){
		cin >> n;
		for (int i=0;i<n;i++) adjList[i].clear();
		memset(arr,0,sizeof(arr));
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin >> tmp;
				if (tmp == 1){
					adjList[i].pb(j);
				}
			}
		}
		memset(vis,0,sizeof(vis));
		dont = n+1;
		dfs(0,1,0);
		dfs(0,0,0);
		for (int i=1;i<n;i++){
			dont = n+1;
			memset(vis,0,sizeof(vis));
			dfs(0, 1, i);
			dont = i;
			memset(vis,0,sizeof(vis));
			dfs(0, 0, i);
			memset(vis,0,sizeof(vis));
			dont = n+1;
		}
		arr[0][0] = 1;
		cout << "Case " << t <<":\n";
		print();




	}
	return 0;
}
