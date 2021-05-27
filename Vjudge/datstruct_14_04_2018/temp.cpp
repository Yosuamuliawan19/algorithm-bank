#include<iostream>
#include<queue>
#include<string>
#include<algorithm>

using namespace std;
int main(){
	while (1){
		long long n; cin >> n;
		long long arr[5001] = {0};
		priority_queue < long long, vector<long long> , greater<long long> > pq;
		if (n == 0) break;
		long long temp;
		for (int i=0;i<n;i++){
			cin >> temp;
			pq.push(temp);
		}
		long long cost = 0;
		while (pq.size() > 1){
			long long cur = pq.top();
			pq.pop();
			cur += pq.top();
			pq.pop();
			cost += cur;
			pq.push(cur);
		}
		cout << cost << endl;
	}

	return 0;
}
