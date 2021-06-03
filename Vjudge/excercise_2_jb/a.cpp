#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	for (int i = 0; i < tc; ++i)
	{
		string w;
		cin  >> w;
		int len = w.length();
		if (len <= 10){
			cout << w << endl;
			continue;
		}else{
			cout << w[0] << (len - 2) << w[len-1] << endl;
		}
	}
	return 0;
}