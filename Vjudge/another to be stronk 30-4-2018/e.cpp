#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
#include<climits>

using namespace std;
vector<vector<long long> > matrix;
vector<vector<long long> > cost;

int main (){
	long long n,tc = 1;
	while (cin >> n){
		if (n == 0 )break;
		matrix = vector<vector<long long> >(n, vector<long long>(3, 0));
		cost = vector<vector<long long> >(n, vector<long long>(3, LLONG_MAX));

		for (long long i=0;i<n;i++){
			for (long long j=0;j<3;j++){
				scanf("%lld", &matrix[i][j] ) ;
			}
		}
		// from matrix[0][1] to matrix [n-1][1];
		priority_queue<
			pair<long long,pair<long long,long long> >,
			vector< pair<long long,pair<long long,long long> > >,
			std::greater< pair<long long,pair<long long,long long> > >
		> pq;
		
		pq.push(make_pair(matrix[0][1],make_pair(0,1)));
		cost[0][1] = matrix[0][1];
		long long cnt = 0;
		while (!pq.empty()){
//			cnt ++ ;
			pair<long long,pair<long long,long long> > cur = pq.top(); pq.pop();
			long long w = cur.first, x = cur.second.first, y = cur.second.second;
//			cout <<"w = " <<  w << " " << x << " " << y << endl;
			if (x == n-1 && y == 1) break;
			for (long long i=y+1;i<3;i++){
//				cout << "trying " << x << " " << i << endl;

				if (cost[x][i] > matrix[x][i] + w){
					cost[x][i] = matrix[x][i] + w;
//					cout << "pushing " << matrix[x][i] << endl;
					pq.push(make_pair(cost[x][i], make_pair(x, i)));
					cnt ++;
				}
			}	
			if (x != n-1){
				for (long long i=0;i<3;i++){
//					cout << "trying " << x+1 << " " << i << endl;
//					cout << i << " " << y << " " << cost[x+1][i] << " " <<  matrix[x+1][i] + w << endl;
					if (cost[x+1][i] > matrix[x+1][i] + w && (i == y-1 || i == y || i == y+1)){
						cost[x+1][i] = matrix[x+1][i] + w;
						pq.push(make_pair(cost[x+1][i], make_pair(x+1, i)));
						cnt ++;
					}
				}	
			}
//			cout << cnt << endl;
			cnt = 0;
		
		}
//		for (long long i=0;i<n;i++){
//			for (long long j=0;j<3;j++){
//				cout << cost[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << "number of nodes explored = " << cnt  << endl;
		printf("%lld. %lld\n", tc, cost[n-1][1]);
//		cout << tc << ". " << cost[n-1][1] << endl;
		tc ++ ;
	}
}
