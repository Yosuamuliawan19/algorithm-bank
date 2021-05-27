#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;
int main (){
	long long n, q;
	cin >> n >> q;
	vector<long long> warriors(n,0);
	vector<long long> time(q,0);
	for(int i=0;i<n;i++){
		cin >> warriors[i];
	}
	for(int i=0;i<q;i++){
		cin >> time[i];
	}
	long long war = 0;
	vector<long long> warrior = warriors;
	for (long long i=0;i<q;i++){
		long long pow = time[i];
		for (int j=war;j<n;j++){
			if (pow >= warrior[j]){
				war++;
				pow -= warrior[j];
				warrior[j] = 0;
				if (pow == 0) break;
			}else{
				warrior[j] -= pow;
				pow = 0;
//				cout << "warrior "<< j << " left with health " << warrior[j] << endl;
				break;
			}
		}
		if (war == n){
			warrior = warriors;
			war = 0;
		}
		cout << n -  war << endl;
	}
	return 0;
}
