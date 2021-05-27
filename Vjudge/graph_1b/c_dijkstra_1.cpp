#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);

	long long tc;
	cin >> tc;
	while (tc--){
		long long v, k ;
		cin >> v >> k;
		vector< vector<pair<long long,long long> > > adjList(v , vector<pair<long long,long long> >());
		long long a , b, c ;
		for (long long i=0;i<k;i++){
			cin >> a >> b >> c;
			adjList[a-1].push_back(make_pair(b-1,c));
			adjList[b-1].push_back(make_pair(a-1,c));
		}
		long long start, dest;
		vector<long long> dist = 	vector<long long>(v,100000001);
		cin >> start >> dest;	start--;dest--;
		priority_queue<pair<long long,long long>, vector<pair<long long,long long> >, greater<pair<long long,long long> > > pq;
		pq.push(make_pair(0,start));
		dist[start] = 0;
		while (!pq.empty()){
			pair<long long,long long> front = pq.top();pq.pop();
			long long w = front.first, cur = front.second;
//			printf("processing w = %d v = %d\n", w, cur);
			for (long long i=0;i<adjList[cur].size();i++){
				pair<long long,long long> v = adjList[cur][i];
				if (v.second + w < dist[v.first]){
					dist[v.first] = v.second + w;
					pq.push(make_pair(	dist[v.first], v.first));
//					printf("push w = %d v = %d\n", dist[v.first], v.first);
				}
			}
		}
		if (dist[dest] == 100000001){
			cout << "NO\n";
		}else{
			cout << dist[dest] << "\n";
		}
	}
	
	return 0;
}
