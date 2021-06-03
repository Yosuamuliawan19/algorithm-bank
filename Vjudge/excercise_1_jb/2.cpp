#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int s;
	cin >> s;
	int val =0;
	for (int i = 0; i < s; ++i)
	{
		string stat = "";
		cin >> stat;
		if (stat == "++X" || stat == "X++") val ++;
		else if (stat == "--X" || stat == "X--") val --;
	}
	cout << val << endl;
	return 0;
}