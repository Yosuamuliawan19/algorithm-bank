#include<iostream>
#include<queue>
#include<vector>

using namespace std;
int main (){
	long long n, m , k;
	cin >> n >> m >> k;
	string maze[502];
	for (int i=0;i<n;i++){
		cin >> maze[i];
	}
	long long sx, sy;
	bool stop = false;
	long long s = 0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (maze[i][j] == '.'){
				s++;
				if (stop) continue;
				sx = i, sy = j;
				stop = true;
			}
		}
	}
	k =  s - k;
	queue<pair<int,int> > q;
	q.push(make_pair(sx,sy));
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
	long long cnt = 0;
	while (!q.empty() && cnt < k){
		cnt ++;
		pair<int,int> cur = q.front(); q.pop();
		int x = cur.first, y = cur.second;
		maze[x][y] = '1';
		for (int i=0;i<4;i++){
			int a = x + dx[i], b = y + dy[i];
			if (a >=0 && a < n && b >=0 && b < m){
				if (maze[a][b] == '.') q.push(make_pair(a,b));
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (maze[i][j] == '.') cout << 'X';
			else if (maze[i][j] == '1') cout << '.';
			else cout << '#';
		}
		cout << "\n";
	}
	
	
	
	
	
	return 0;
}

