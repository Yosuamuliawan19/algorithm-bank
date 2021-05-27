#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main (){
	string s;
	cin >> s;
	int l = 0, h = 0;
	for (int i=0;i<s.length();i++){
		if (s[i] >= 97){
			h ++;
		}else{
			l ++;
		}
	}
//	cout << h << " " << l << endl;
	if (h >= l){
		for (int i=0;i<s.length();i++){
			cout << (char)tolower(s[i]);
		}
		cout << endl;
	}else{
		for (int i=0;i<s.length();i++){
			cout << (char) toupper(s[i]);
		}
		cout << endl;
	}
	
}
