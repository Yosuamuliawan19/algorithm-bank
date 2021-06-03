#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
	long long c;
	cin >> c;
	while (c--){
		map <string , int> m;
		string x;
		cin >> x;
		sort(x.begin(), x.end());
		vector <string> v;
		cout <<  x << endl;
		m[x] = 1;
		while ( next_permutation(x.begin(), x.end())){
			if (m[x] != 1 ){
				v.push_back(x);
				m[x] = 1;
			}
			
		}
		sort(v.begin(), v.end());
		for (long long i=0;i<v.size();i++){
			cout << v[i] << endl;
		}
	}
	return 0;
}