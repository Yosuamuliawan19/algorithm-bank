#include<iostream>
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




int arr[1000][1000] = {0};
bool vis[1000][1000];
int dx[8] = {0};
int dy[8] = {0};
ll tc,r,c,m,n,w,a,b;
void dfs(ll x, ll y){
	for (int i=0;i<8;i++){
		ll a = x +dx[i], b = y+dy[i];
		if (a>=0 && a<n && b>=0 && b<m && !vis[a][b] && arr[a][b] != -1){
			vis[a][b] =1;
			dfs(a,b);
		}
	}
}
int main(int argc, char const *argv[])
{
	cin >> tc;
	for (int t=1;t<=tc;t++){
		for (int i=0;i<1000;i++) for (int j=0;j<1000;j++) {arr[i][j] = 0;vis[i][j]=0;}
		cin >> r >> c >> m >> n >> w;
		dx[0] = m; dx[1] = -m; dx[2] = m; dx[3] = -m;
		dy[0] = n; dy[1] = -n; dy[2] = -n; dy[3] = n;
		dx[4] = n; dx[5] = -n; dx[6] = -n; dx[7] = n;
		dy[4] = m; dy[5] = -m; dy[6] = m; dy[7] = -m;
		n = r; m = c;
		while (w--){
			cin >> a >> b;
			arr[a][b] = -1;
		}
		vis[0][0] = 1;
		dfs(0,0);

		ll odd = 0, even = 0;
		map<pair<int,int>, bool > mp;
		for (ll i=0;i<n;i++){
			for (ll j=0;j<m;j++){
				if (arr[i][j] == -1 || !vis[i][j]) continue;
				mp.clear();
				for (ll k=0;k<8;k++){
					ll a = i+dx[k], b= j+dy[k];
					if (a>=0 && a<n && b>=0 && b<m && vis[a][b] && arr[a][b] != -1
					&& mp.find(make_pair(a,b)) == mp.end()){
						arr[a][b]++;
						mp[make_pair(a,b)] = 1;
					}
				}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				// cout << arr[i][j] << " ";
				if (arr[i][j] == -1 || !vis[i][j]) continue;
				if (arr[i][j] %2 ==0) even++;
				else odd++;
			}
			// cout <<endl;
		}
		cout << "Case " << t << ": "<< even << " " << odd<<endl;
	}

	return 0;
}
