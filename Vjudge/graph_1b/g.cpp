#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iomanip>

using namespace std;
vector<int> parent;
int findParent(int x){
	return (parent[x] == x? x : parent[x] = findParent(parent[x])); 
}
void unify(int x, int y){
	int a = findParent(x), b = findParent(y);
	if (a > b){
		parent[a] = b;
	}else{
		parent[b] = a;
	}
}
bool sameSet(int x, int y){
	return (findParent(x) == findParent(y));
}
int main (){
	int tc; cin >> tc;
	int s, p;
	while (tc--){
		
		cin >> s >> p;
		vector<pair<int,int> > locs;
		int a, b;
		parent.clear();
		for (int i=0;i<p;i++){
			cin >> a >> b;
			locs.push_back(make_pair(a,b));
			parent.push_back(i);
		}
		vector<pair<double,pair<int,int> > > edges;
		for (int i=0;i<p;i++){
			for (int j=0;j<p;j++){
				int x1 = locs[i].first,y1 = locs[i].second,x2 = locs[j].first,y2 = locs[j].second;
				edges.push_back(make_pair(
					sqrt(
						(abs(x1-x2) * abs(x1-x2))
						+	(abs(y1-y2) * abs(y1-y2))
					)
				,make_pair(i,j)));
			}
		}
		sort (edges.begin(),edges.end());
		stack<double> res;
		for (int i=0;i<edges.size();i++){
			int x = edges[i].second.first ,y = edges[i].second.second ;
			double w = edges[i].first;
			if (!sameSet(x,y))
			{
				unify(x,y);
				res.push(w);
			}
		}
		for (int i=0;i<s-1;i++){
////			cout << res.top() << endl;
			res.pop();
		}
		cout << fixed << setprecision(2) << res.top() << endl;
	}
	return 0;
}
