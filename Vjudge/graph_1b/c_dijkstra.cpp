#include<iostream>
#include<vector>
#include<queue>

using namespace std;
vector<vector<pair<long long,long long> > > adjList;
long long main (){
	long long tc;
	scanf("%d", &tc);
	for (long long t=0;t<tc;t++){
		long long n , e;
		scanf("%d %d", &n, &e);

		long long x , y , w;
		adjList = vector<vector<pair<long long,long long> > >(n,vector<pair<long long,long long> >());
		for (long long i=0;i<e;i++){
			scanf("%d %d %d", &x, &y, &w);
			x--;y--;
			adjList[y].push_back(make_pair(x , w));
			adjList[x].push_back(make_pair(y , w));

		}
		long long a , b;
		scanf("%d %d", &a, &b);
		a--;b--;
		vector<long long> dist = 	vector<long long>(n,-1);
		priority_queue<pair<long long,long long>, vector<pair<long long,long long> > , greater<pair<long long,long long> >  > pq;
		pq.push(make_pair(0,a));
		while (!pq.empty()){
//			cout << "asdasd" << endl;
			pair<long long,long long> cur = pq.top();pq.pop();
			long long weight = cur.first, cc = cur.second;
//			cout << "processing " <<weight << endl;
			dist[cc] =  weight;
			for (long long i=0;i<adjList[cc].size();i++){
				pair<long long,long long> vertex = adjList[cc][i];
//				cout << "comparing distance "<<dist[vertex.first] << " " <<  vertex.second << endl;
				if (dist[vertex.first] > vertex.second + weight || dist[vertex.first] == -1 )
				{
//					cout << "pushing " << vertex.first << " long longo pq \n";
					if (vertex.first == b){
						dist[b] = vertex.second + weight;
						break;
					}
					pq.push(make_pair(vertex.second + weight, vertex.first));
				}
			}		
		}
		if (dist[b] != -1)
		cout << dist[b] << endl;
		else cout << "NO\n";
	} 
	
	return 0;
}
