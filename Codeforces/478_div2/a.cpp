#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;
int main (){
	long long n; string temp;
	cin >> n;	
	long long ans = 0;
	map<string,bool> mm;
	while (n--){
		vector<bool> let(26,false);
		vector<char> let2;
		string cur = "";
	 	cin >> temp;
	 	for (long long i=0;i<temp.length();i++){
	 		if (let[temp[i] - 97] == false){
	 			let2.push_back(temp[i]);
	 			let[temp[i] - 97] = true;
 			}
		}
		sort(let2.begin(),let2.end());
		for (long long i=0;i<let2.size();i++){
			cur += let2[i];
		}
		if (mm.find(cur) == mm.end()){
			mm[cur] = true;
			ans ++ ;
		}
	}
	cout << ans << endl;
	
	
	return 0;
}
