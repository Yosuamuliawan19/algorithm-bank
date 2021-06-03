#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> parent;
vector<int> sz;
int findParent(int x){
	return (parent[x] == x? x : parent[x] = findParent(parent[x]));
}
bool sameSet(int x, int y){
	return (findParent(x) == findParent(y));
}
void unify(int x, int y){
	int a = findParent(x), b = findParent(y);
	if (a > b){
		parent[a] = b;
	}else{
		parent[b] = a;
	}
	sz[a] += sz[b];
	sz[b] = sz[a];
}
int main (){
	int n , m;
	while (cin >> n >> m){
		if (n == 0 & m == 0) break;
		parent.clear(); sz.clear();
		sz = vector<int>(n,1);
		for (int i=0;i<n;i++){
			parent.push_back(i);
		}
		int a, b;
		for (int i=0;i<m;i++){
			cin >> a >> b;
			int base = b;
			for (int j=0;j<a-1;j++){
				cin >> b;
				if(!sameSet(base,b)){
					unify(b,base);
				}
			}
		}
		cout << sz[0] << endl;
	}
	
	return 0;
}
