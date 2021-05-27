#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;
int main (){
	vector<long long> tmp(14);
	for (long long i=0;i<14;i++){
		cin >> tmp[i];
	}

	long long max = -1;
	for (long long i=0;i<14;i++){
		vector<long long> stones = tmp;
		long long cur = stones[i];
		long long idx = i + 1;
		long long cnt = 0;
//		cout << "---\n";

		while (cur--){
			stones[idx] += 1;
//			cout << stones[idx] << " " << cur << endl;
			if ((stones[idx]) % 2 == 0){
				cnt += stones[idx];
			}
			idx ++;
			if (idx == 14){
				idx = 0;
			}
		}
		if (cnt > max){
			max = cnt;
		}
	}
	cout << max << "\n";
	return 0;
}
