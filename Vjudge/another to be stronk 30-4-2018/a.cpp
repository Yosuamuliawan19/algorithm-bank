#include<iostream>
using namespace std;
int main (){
	string s, h = "hello";
	cin >> s;
	long long cnt = 0;
	for (int i=0;i<s.length();i++){
		if (s[i] == h[cnt]){
			cnt ++;
		}
	}
	if (cnt == 5){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	
	
	return 0;
}
