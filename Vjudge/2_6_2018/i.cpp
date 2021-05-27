#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main (){
	long long n , m;
	long long cas = 0;
	while (cin >> n ){
		cas ++;
		vector <long long> set;
		vector <long long> res;
		for (long long i=0;i<n;i++){
			long long a;
			cin >> a;
			for (long long j=0;j<set.size();j++){
				res.push_back(set[j] + a);
			}
			set.push_back(a);
		}
		sort(res.begin(),res.end());
		/*
		for (int i =0;i<res.size();i++){
			cout << res[i] << " ";
		}
		 cout << endl;
		 */
		 cin >> m;
		 cout << "Case " << cas <<":" << endl;
		
		for (long long i=0;i<m;i++){
			long long que;
			cin >> que;
			
			long long smallest = 100000000;
			long long ans = -1;
			for (int j=0;j<res.size();j++){
				if (res[j] == que){
					ans = que;
					break;
				}
				if (smallest > abs (res[j] - que)){
					smallest = abs (res[j] - que);
					ans = res[j];
				}
				
			}
				cout << "Closest sum to " << 	que << " is " << ans << "." <<endl;
			/*
			long long ans = 0;
			
			long long l = 0,  r = res.size()-1;
			
			while (1){
				if (res[(l+r) / 2] == que){
					ans = que;
					break;
				}else if (res[(l+r) / 2] > que){
					r = ((l+r)/2) - 1;
				}else{
					l = ((l+r)/2)  +1;
				}
				if (l >= r){
					long long a = (l == 0) ? res[l]:res[l-1] , b =  (r == res.size() - 1) ? res[r]:res[r+1];
					ans = ( abs(a - que ) <= abs(b - que)) ? a : b;
					break;
				} 
			}
			cout << "Closest sum to " << 	que << " is " << ans << "." <<endl;*/
		}
	}
	return 0;
}
