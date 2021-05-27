#include<iostream>
#include<climits>
#include<vector>
#include<queue>

using namespace std;
int main (){
	int tc, n ,m ;
	string tmp;
	cin >> tc; 
	while (tc--){
		cin >> m >> n;
		int sx,sy,dx,dy;
		vector< vector< long long > > maze(m, vector<long long>(n, INT_MAX));
		for (int i=0;i<m;i++){
			cin >> tmp;
			for (int j=0;j<n;j++){
				if (tmp[j] == '$'){
					sx = i; sy = j;
					maze[i][j] = 0;
				}else if (tmp[j] == 'O'){
					maze[i][j] = -1;
				}else if (tmp[j] == '#'){
					dx = i, dy = j;
					maze[i][j] = -1;
				}
			}
		}
		int dirx[4] = {1,-1,0,0};
		int diry[4] = {0,0,1,-1};
		queue <pair<int,int> > q;
		q.push(make_pair(sx,sy));
		while (!q.empty()){
			pair<int,int> front = q.front();q.pop();
			int x = front.first, y = front.second;
			for (int i=0;i<4;i++){
				int a = x + dirx[i], b = y + diry[i];
				if (a >= 0 && a < m && b >= 0 && b < n && maze[a][b] == -1 ){
					maze[a][b] = maze[x][y] + 1;
					q.push(make_pair(a, b));
				}
			}
		}
//		for (int i=0;i<m;i++){
//			for (int j=0;j<n;j++){
//				cout << maze[i][j] << " ";
//			}
//			cout << endl;
//		}
		cout << maze[dx][dy] << "\n"; 
		
	}
	
	return 0;
}
