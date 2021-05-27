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
		int in;
		cin >> in;
		if (in < 3){
			cout << in << endl;
		}else{
			cout << (in / 2) + 1 << endl;
		}
		

	}
	return 0;
}