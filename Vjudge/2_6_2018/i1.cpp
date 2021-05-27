#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
	int n;
	
	long long cas = 1;
	while (cin >> n){
		vector <int> set;
		vector <int> sums;
		for (int i=0;i<n;i++){
			int temp;
			cin >> temp;
			for (int j=0;j<set.size();j++){
				sums.push_back(set[j] + temp);
			}
			set.push_back(temp);
		}
		sort(sums.begin(),sums.end());
		/*
		for (int i=0;i<sums.size();i++){
			cout << sums[i] << " ";
		}
		cout << endl;
		*/
		int m; cin >> m; 
		cout << "Case " << cas <<  ":\n"; cas ++;
		
		while (m--){
			int query;
			cin >> query;
			
			int amountofsum = sums.size();
			int l =0,r= amountofsum -1;
			int result = 0;
			//int count =0;
			while (1){
				//count ++;if(count == 10) break;
				//cout << l << " " << r << " " << (l+r) /2 <<endl;
				if (abs(l-r) <= 1){
					int a = l, b = r;
					
					result = (abs(sums[a] - query) < abs(sums[b]-query)) ? sums[a] : sums[b]; 
					break;
				}
				if ( sums[(l+r) /2] == query){
					result = sums[(l+r) /2];
					break;
				}else if (sums[(l+r) /2] > query){
					r = ((l+r) /2) - 1;
				}else{
					l = ((l+r) /2) + 1;
				}
			}
			cout << "Closest sum to " << query << " is "<<result<<"." <<endl;
			
		
		}
		
		
	}
	return 0;
}
