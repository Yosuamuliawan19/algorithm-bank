#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;
int main(){
	int tc, e, v, tmp1, tmp2;
	cin >> tc;
	int cnt = 0;
	while (tc--){
		cnt ++ ;
		cin >> v >> e;
		if (cnt == 8) cout << v << " " << e << endl;
		vector<vector<long long> > adjList(v, vector<long long> ());
		vector<bool> isroot(v, true);
		if (cnt == 8) cout << "input is \n" ;
		for (int i=0;i<e;i++){
			cin >> tmp1 >> tmp2;
			if (cnt == 8) cout << tmp1 << " " << tmp2 << endl;
			adjList[tmp1].push_back(tmp2);
			adjList[tmp2].push_back(tmp1);
			isroot[tmp2] = false;
		}
		// bipartite;
		int cnt1 = 0, cnt2 = 0;
		vector<long long> cost(v, LLONG_MAX);
		queue<long long> q;
		// pushing into q
		for (int i=0;i<v;i++){
			if (isroot[i]){
				q.push(i);
				cost[i] = 0;
				if (cnt == 8)
				cout << i << " is root \n";
			}
		}
		// bipartite checking
		bool flag = true;
		while(!q.empty()){
			long long cur = q.front(); q.pop();
			if (cnt == 8)
			cout << "processing " << cur << endl;
			if (cost[cur] % 2 == 0) cnt1 ++;
			else cnt2 ++;
			for (int i=0;i<adjList[cur].size();i++){
				long long pro = adjList[cur][i];
				if (cnt == 8)
				cout << "trying " << pro << endl;
				if (cost[pro] == LLONG_MAX){
					cost[pro] = cost[cur] + 1;
					q.push(pro);
				}else if (cost[pro] % 2 == cost[cur] % 2){
					if (cnt == 8)
					cout << "confilct between " << pro << " " << cur << endl;
					flag = false;
				}
			}
		}
		// cout << "ans \n" ;
		if (flag){
			if (cnt1 == 0){
				cout << cnt2 << endl;
			}else if (cnt2 == 0){
				cout << cnt1 << endl;
			}else{
				cout << min(cnt1,cnt2) << "\n";
			}
			// cout << cnt1 << " " << cnt2 << endl;
		}else{
			cout << "-1\n";
		}


	}


	return 0;
}
