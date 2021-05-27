#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<string>
using namespace std;
int main (){
	int tc;
	cin >> tc;
	string temp;
	for (int te=0;te<tc;te++){

		getline(cin, temp);
		int n , e, t, m;
		cin >> n >> e >> t >> m;
		int a, b, c;
		vector<pair<int,int> >  adjList[101];
		for (int i=0;i<m;i++){
			cin >> a >> b >> c;
			adjList[a-1].push_back(make_pair(c, b-1));
		}
		priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
		vector<int> dist(n,INT_MAX);
		pq.push(make_pair(0,e-1));
		dist[e-1] = 0;
		while (!pq.empty()){
			pair<int,int> cur = pq.top();pq.pop();
			int v = cur.second, w = cur.first;
			for(int i=0;i<adjList[v].size();i++){
				int a = adjList[v][i].second, b = adjList[v][i].first;
				if (dist[a] > b + w ){
					dist[a] = b + w;
					pq.push(make_pair(b+w, a));
				}
			}
		}
		int cnt = 0;
		for (int i=0;i<n;i++){
			if (dist[i] <= t){
				cnt ++;
			}
		}
		cout << cnt << endl;
		if (te != tc-1) cout << endl;
	}
	
	return 0;
}
