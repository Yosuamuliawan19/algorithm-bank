#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;
int main (){
	vector<long long> stones;
	long long tmp;
	for (long long i=0;i<14;i++){
		cin >> tmp;
		stones.push_back(tmp);
	}
	long long max = -1;
	for (long long j=0;j<14;j++){
		long long cur = stones[j];
		vector<long long> stone = stones;
		stone[j] = 0;
		// to fill in first
		long long idx = j + 1;
		long long cnt = 0;
		while (cur != 0){
			stone[idx] ++;
			cur --;

			if (stone[idx] % 2 == 0){
				cnt += stone[idx];
			}
			idx ++;
			if (idx == 14) break;
		}
//		cout << "cnt "  << cnt << endl;	
//			cout << "mycur " << cur << endl;


		// fill in per 14
		long long even = 0, odd = 0;
		long long cntodd = 0, cnteven = 0;
		for (long long i=0;i<14;i++){
			if (stone[i] % 2 == 0) {
				even += stone[i];
				cnteven ++;
			}else{
				odd += stone[i];
				cntodd ++;
			}
		}
		long long state = 0;
		long long timesodd = 0, timeseven = 0;
		while (cur >= 14){
			cur -= 14;
			if (state == 0){
				odd += cntodd;
				cnt += odd;
				timesodd++;
				state = 1;
			}else{
				even += cnteven;
				cnt += even;
				timeseven ++;
				state = 0;
			}
		}
//		cout <<" " <<  cnt ;
//		if (j == 0){
//			cout << endl;
//			cout <<"cur " <<  cur << endl;
//
//			for (long long i=0;i<14;i++){
//				cout << stone[i] << " ";
//			}
//			cout << endl;
//		}
		for (long long i=0;i<cur;i++){
			bool isEven = true;
			if (stone[i] % 2 == 0){
				stone[i] += timesodd + 1;
			}else{
				isEven = false;
				stone[i] += timeseven + 1;
			}	
			if (state == 0){
				if (!isEven){
					cnt += stone[i];
				}
			}else{
				if (isEven){
					cnt += stone[i];
				}
			}
		}
//		cout <<" " <<  cnt << endl;
		if (cnt > max){
			max = cnt;
		}
//		if (j == 0 )break;
	} 
	cout << max << endl;
	return 0;
}
