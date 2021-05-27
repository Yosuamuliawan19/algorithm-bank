#include<iostream>
#include<string>
using namespace std;
int main (){
	string s;
	string x = "PER";
	cin >> s;
	int count =0 , cur = 0;
	for (int i=0;i<s.length();i++)
	{
		if (s[i] != x[cur]){
			count ++;
		}
		cur ++;
		if (cur == 3) cur = 0;
	}
	cout << count <<endl;
	return 0;
}
