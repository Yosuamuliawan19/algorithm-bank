#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	for (int i = 0; i < x; ++i)
	{
		int y;
		cin >> y;
		if (y == 1){
			cout << 2 << endl;
			continue;
		}
		if (y == 0){
			cout << 0 << endl;
			continue;
		}

		cout << y + 1 << endl;

	}

	return 0;
}