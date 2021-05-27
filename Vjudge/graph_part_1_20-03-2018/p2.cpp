#include<iostream>
#include<queue>
#include<climits>
#include<vector>

using namespace std;
int main (){
	int n , m , k;
	string temp;
	cin >> n >> m >> k;
	vector<vector<long long > > maze(n, vector<long long>(m, INT_MAX));
	vector<pair<int,int> > blanks;
	vector<int> sizes;
	for (int i=0;i<n;i++){
		cin >> temp;
		for (int j=0;j<m;j++){
			if (temp[j] == '.'){
				maze[i][j] = -1;
				blanks.push_back(make_pair(i,j));	
//				cout << "asmt" <<endl;
			}
		}
	}
	int color = 1;
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
	for (int i=0;i<blanks.size();i++){
		int x = blanks[i].first, y = blanks[i].second;
//		cout << "1\n" << maze[x][y] << endl;
		if (maze[x][y] == -1){
			queue<pair<int,int> > q ;
			q.push(make_pair(x,y));
			int colorsize = 0;
			maze[x][y] = color;
//			cout << "2\n";
			while (!q.empty()){
				pair<int,int> cur = q.front();q.pop();
				int a = cur.first, b = cur.second;
//				cout << "visiting " << a << "  " << b << endl;

				for (int j=0;j<4;j++){
					int c = a + dx[j] , d = b + dy[j];
					if (c >= 0 && c < n && d >=0 && d < m){
						if (maze[c][d] == -1){
//							cout << "pushing " << c << " " << d << endl;
							maze[c][d] = color;
							q.push(make_pair(c,d));
						}else if (maze[c][d] == INT_MAX) {
							colorsize ++;
						}
					}
				}
//				cout << "current colorsize " << colorsize << endl;
				
			}
			sizes.push_back(colorsize);
//			cout << "color " << color << " size " << colorsize << endl;
			color ++;
			
		}
	}
	int a, b;
	for (int i=0;i<k;i++){
		cin >> a >> b;
		cout << sizes[maze[a-1][b-1]-1] << "\n";
	}
	
	return 0;
}
