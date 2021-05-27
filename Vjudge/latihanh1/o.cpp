#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	string a = "hello";
	int c = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == a[c]){
			c++;
		}
	}

	if (c == 5){
		cout << "YES" <<endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}