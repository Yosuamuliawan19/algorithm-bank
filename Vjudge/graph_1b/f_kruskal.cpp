#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<pair<int,pair<int,int> > >edge;
vector<int> parent;
int findParent(int x){
	if (parent[x] == x) return x;
	else return (parent[x] = findParent(parent[x]));
}
bool sameSet(int x, int y){
	return findParent(x) == findParent(y);
}
void unify(int x,int y){
	if (!sameSet(x,y)){
		int a = findParent(x), b = findParent(y);
		if (a > b){
			parent[a] = b;
		}else{
			parent[b] = a;
		}
	}
}
int main (){
	int n , m;	
	while (scanf("%d %d", &n, &m) == 2){
		if (n == 0 & m == 0 ) break;
		int a, b, w;
		edge.clear();
		parent.clear();
		for (int i=0;i<n;i++){
			parent.push_back(i);
		}
		int totdis = 0 ;
		for (int i=0;i<m;i++){
			scanf("%d %d %d" , &a, &b, &w);
			totdis += w;
			edge.push_back(make_pair(w,make_pair(a ,b)));
		}
//		printf("totw = %d\n", totdis);
//		cout << "asdas" << endl;
		sort(edge.begin(),edge.end());
//				cout << "asdas" << endl;

		int tot = 0;
		for (int i=0;i<m;i++){
			pair<int,int> cur = edge[i].second;
			int weight = edge[i].first;
			int x = cur.first, y = cur.second;
			if (!sameSet(x,y)){
//				printf("adding %d %d weight = %d\n",x,y ,weight);
				
				tot += weight;
				unify(x,y);
//				for (int j=0;j<n;j++){
//					printf("%d ", parent[j]);
//				}
//				cout << endl;
			}
		}
		printf("%d\n",totdis-  tot);
	} 
	
	
	
	return 0;
}
