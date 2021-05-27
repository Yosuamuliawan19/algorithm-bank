#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<long long, pair<long long,long long> > > edges;
vector<long long> parent;
long long findParent(long long x ){
	if (parent[x] == x) return x;
	else return (parent[x] = findParent(parent[x]));
}
bool sameSet(long long x , long long y){
	return (findParent(x) == findParent(y));
}
void unify(long long x , long long y)
{
	long long a = parent[x], b = parent[y];
	if (a> b){
		parent[x] = b;
	}else{
		parent[y] = a;
	}
}
int main (){
	long long n , m ; cin >> n >> m;
	for (long long i=0;i<n;i++){
		parent.push_back(i);
	}
	for (long long i=0;i<m;i++){
		long long x , y , w;
		cin >> x >> y >> w;
		edges.push_back(make_pair(w,make_pair(x,y)));
	}
	long long res = 0;
	sort(edges.begin(),edges.end());
	for (long long i=0;i<m;i++){
		pair<long long,pair<long long,long long> > top = edges[i];
		long long curw = top.first;
		pair<long long,long long> cur = top.second;
		long long x = cur.first , y = cur.second ;
		x--;y--;
		if (!sameSet(x,y)){
			unify(x,y);
			res+= curw;
		}
	}
	cout << res << endl;
	
	return 0;
}
