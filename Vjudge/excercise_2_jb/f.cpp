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
		int x;
		cin >> x;
		if (x == 1){
			cout << 1 << endl;
			continue;
		}else if (x == 0){
			cout << 1 << endl;
			continue;
		}
		int val = x;
		for (int i1 = x - 1 ; i1 > 0; --i1)
		{
			val *= i1;
		}
		cout << val << endl;
	}
	return 0;
}