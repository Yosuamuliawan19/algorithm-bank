#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<climits>
#include<set>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int parent[70000];
int findParent(int x){
	return (parent[x] == x? x: parent[x] = findParent(parent[x]));
}
bool sameSet(int x, int y){
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

int main(int argc, char const *argv[])
{
	int tc, n, a, b;
	scanf("%d",&tc);
	while (tc--){
		for (int i=0;i<70000;i++) parent[i] = i;
		scanf("%d", &n);
		priority_queue<pair<pii, int>, vector<pair<pii, int> >, greater<pair<pii, int> > > pq;

		for (int i=0;i<n;i++){
			scanf("%d%d",&a,&b);
			pq.push(mp(mp(a,b), i));
			pq.push(mp(mp(b,a), i));
		}
		vector<pair<pii, int> > v;
		while (!pq.empty()){
			pair<pair<int,int> ,int> cur = pq.top(); pq.pop();
			cout <<cur.fi.fi << " " << cur.fi.se << " " << cur.se << endl;
			int cnt = 1;
			while (pq.top().fi.fi == cur.fi.fi && (!sameSet(cur.se, pq.top().se))){
				cnt ++;
				cout <<" -- " << pq.top().fi.fi << " " << pq.top().fi.se << " " << pq.top().se << endl;
				v.pb(pq.top());
				pq.pop();
			}
			if (cnt != 1){
				v.pb(cur);
			}
		}
	}

	return 0;
}
