#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> adjList[101];
vector<bool> isRoot;
vector<bool> vis;
vector<int> res;
void topo(int x){
	for (int i=0;i<adjList[x].size();i++){
		int cur = adjList[x][i];
		if (vis[cur] == false){
			vis[cur] = true;
			topo(adjList[x][i]);
		}
	}
	res.push_back(x);
}

int main (){

	int n, temp;
	cin >> n;
	isRoot = vector<bool>(n,true);
	vis = vector<bool>(n,false);
	for (int t=0;t<n;t++){
		while (1){
			cin >> temp;
			if (temp == 0) break;
			adjList[t].push_back(temp-1);	
			isRoot[temp-1] = false;
		}
	}
	for (int i=0;i<n;i++){
		if (isRoot[i]){
			topo(i);
		}
	}
	for (int i=res.size()-1;i>0;i--){
		cout << res[i] + 1<< " ";
	}
	
	cout << res[0]+1<< "\n";
		
	
}
