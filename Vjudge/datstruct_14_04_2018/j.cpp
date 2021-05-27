#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<bool> vis(2*1000000001, true);
int main (){
	int n, a, b;
	priority_queue<int, vector<int>, greater<int> > pq;
	cin >> n;
	while (n --){
		cin >> a;
		if (a == 1){
			cin >> b;
			pq.push(b);
			vis[b+1000000001] = true;
		}else if (a == 2){
			cin >> b;
			vis[b+1000000001] = false;
		}else{
			while (!pq.empty()){
				b = pq.top();
				if (vis[b+1000000001]){
					cout << b << endl;
					break;
				}else{
					pq.pop();
				}
			}
		}
	}
	
	
	return 0;
}