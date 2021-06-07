#include<iostream>
#include<algorithm>

#include<vector>
using namespace std;

vector<long long> parent;
long long findParent(long long a){
	return (a == parent[a] ? a : parent[a] = findParent(parent[a]));
}
bool sameSet(long long a , long long b){
	return 	(findParent(a) == findParent(b));
}
void unify(long long a, long long b){
	long long pa = findParent(a), pb = findParent(b);
	if (pa > pb){
		parent[pa] = pb;
	}else {
		parent[pb] = pa;
	}
}
int main (){
	long long n , m;
	cin >> n >> m;
	for (long long i =0;i<n;i++){
		parent.push_back(i);
	}
	vector<pair<long long ,pair<long long ,long long > > >edges;
	for (long long  i=0;i<m;i++){
		long long x , y, w;
		scanf("%lld %lld %lld", &x ,&y, &w);
		x--;y--;
		edges.push_back(make_pair(w, make_pair(x,y)));
//		cout << x << " " << y << " " << w << endl;
	}
	sort(edges.begin(), edges.end());
	long long result = 0;
	for (long long  i=0;i<m;i++){
		pair<long long ,pair<long long ,long long > > pp = edges[i];
		pair<long long ,long long > cur = pp.second;
		long long  x = cur.first, y = cur.second;
//		cout << "processing " << x << " " << y << " " << pp.first << endl;
		if (!(sameSet(x,y))){
			unify(x,y);
//			cout << result << endl;
			result += pp.first;
		}
	}
	cout << result << endl;

	
	return 0;
}