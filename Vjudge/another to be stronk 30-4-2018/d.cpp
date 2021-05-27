#include<iostream>
#include<vector>
#include<string>

#include<algorithm>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector<int> odd;
	vector<int> even;
	int temp;
	for (int i=0;i<n;i++){
		cin >> temp;
		if (temp % 2 == 0){
			even.push_back(temp);
		}else{
			odd.push_back(temp);
		}
	}
	if (odd.size() != 0){
		sort(odd.begin(), odd.end());
		int tot = odd[odd.size()-1];
		for (int i=0;i<even.size();i++){
			tot += even[i];
		}
		for (int i=odd.size()-2;i>=0;i-=2){
			if (i != 0){
				tot += odd[i] + odd[i-1];
//				cout << "pair is " << odd[i] << " " << odd[i-1] << "\n";
			}
		}
		cout << tot << "\n";
	}else{
		cout << 0 << "\n";
	}
	
	
}
