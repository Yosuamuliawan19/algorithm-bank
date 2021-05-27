#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> parent;
int findParent(int x){
	return (parent[x] == x ? x : parent[x] = findParent(parent[x]));
}
bool sameSet(int x, int y){
//	cout << findParent(x) << " " << findParent(y) << endl;
	return findParent(x) == findParent(y);
}
void unify(int x, int y){
	int a = findParent(x), b = findParent(y);
	if (a > b){
		parent[a] = b;
	}else{
		parent[b] = a;
	}
}
int main (){

	long long n , k, temp, base;
	cin >> n >> k;
	for (int i=0;i<n;i++){
		parent.push_back(i);
	}
	cin >> base;
	for (int i=0;i<k-1;i++){
		cin >> temp;
		if (!sameSet(base-1,temp-1)){
			unify(base-1,temp-1);
//			cout << "unifying " << base-1 << " " << temp-1 << endl;
		}
	}
	priority_queue<
	pair<int,pair<int,int> >,
	vector< pair<int,pair<int,int> > >,
	std::greater< pair<int,pair<int,int> > > > pq;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin >> temp;
			pq.push(make_pair(temp, make_pair(i,j)));
		}
	}
	int cost = 0;
	while (!pq.empty()){
		pair<int,pair<int,int> > cur = pq.top(); pq.pop();
		int w = cur.first;
		int i = cur.second.first, j = cur.second.second;
//		cout << w << " " << i << " " << j << endl;
		if (!sameSet(i,j)){
			unify(i,j);
//			cout << "unifying " << i << " " << j << "w= " << w <<  endl;
			cost += w;
		}
	}
	cout << cost << endl;
	
	
}
