#include<bits/stdc++.h> 
typedef long long ll;
using namespace std;
int main (){
	ll n;
	while (cin >> n){
		stack<ll> s;
		queue<ll> q;
		priority_queue<ll> pq;
		ll a, b;
		bool x = 1, y = 1, z = 1;
		while (n--){
			cin >> a >> b;
			if (a == 1){
				s.push(b);
				q.push(b);
				pq.push(b);
			}else{
				if (!s.empty()){
					if (s.top() != b) x = 0;
					s.pop();
				}else{
					x = 0;
				}
				
				if (!q.empty()){
					if (q.front() != b) y = 0;
					q.pop();
				}else{
					y = 0;
				}
				
				if (!pq.empty()){
					if (pq.top() != b) z = 0; 
					pq.pop();
				}else{
					z = 0;
				}
				
			}
		}
		ll cnt = 0;
		cnt += x + y + z;
		if (cnt == 0){
			cout << "impossible\n";
		}else if (cnt == 2){
			cout << "not sure\n";
		}else if (x){
			cout << "stack\n";
		}else if (y){
			cout << "queue\n";
		}else{
			cout << "priority queue\n";
		}
	}
	
	
	return 0;
}