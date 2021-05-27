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
		int ppl;
		cin >> ppl;

		cout << ppl * (ppl -1)/ 2 << endl;
	}
	return 0;
}