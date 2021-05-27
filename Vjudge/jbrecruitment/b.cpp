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
		int a,b,c,d,e,f;
		cin >> a >> b >> c >> d >> e >> f;
		if (b > a ) cout << "Kasus #" << i + 1<< ": TIME LIMIT EXCEEDED / TIMELIMIT";
		else if (d > c) cout << "Kasus #" << i + 1<< ": MEMORY LIMIT EXCEEDED";
		else if (e != f) cout << "Kasus #" << i + 1<< ": WRONG-ANSWER";
		else{
			cout << "Kasus #" << i + 1<< ": ACCEPTED / CORRECT";
		}
		cout << endl;
	}
	return 0;
}