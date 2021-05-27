#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int n , m , k, s;
int sx, sy;
bool stop = false;
string maze[600];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int cnt;
void dfs(int x, int y){
	for (int i=0;i<4;i++){
		int a = x + dx[i], b = y + dy[i];
		if (a >=0 && b >=0 && a < n && b < m){
			if (cnt >= s) break;
			if (maze[a][b] == '.'){
				maze[a][b] = '1';
				cnt ++;
				dfs(a,b);
			}	
		}
	}
	
}
int main (){
	
	cin >> n >> m >> k;
	
	for (int i=0;i<n;i++){
		cin >> maze[i];
		for (int j=0;j<m;j++){
			if (maze[i][j] == '.'){
				s++;
				if (!stop){
					sx = i;
					sy = j;
					stop = true;
				}
			}
		}
	}
	s = s - k;
	cnt = 1;
	maze[sx][sy] = '1';
	dfs(sx,sy);

	
	// printing
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (maze[i][j] == '.') cout << 'X';
			else if (maze[i][j] == '1') cout << '.';
			else cout << '#';
		}
		cout << endl;
	}
	
	return 0;
}
