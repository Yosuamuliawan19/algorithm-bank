#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	cin.ignore(); 
	for (int i = 0; i < x; ++i)
	{
		string y;
		getline(cin , y);
		for (int i = 0; i < y.length() ;++i)
		{
			if (y[i] >= 97 && y[i] <= 122){
				y[i] -= 32;
			}
		}
		
		if (y.find("APPLE") != std::string::npos){
			char a = y[y.find("APPLE") + 5];
			char b = y[y.find("APPLE") - 1];
			cout <<  a << "  haha  " << b << endl;
			if (   !(a >= 65 || a <= 90)   && !( b>= 65 || b <= 90) ){
				cout << "Kasus #" << i + 1 << ": Inggris" << endl;
				continue;
			}
		
		}
		cout << "Kasus #" << i + 1 << ": Indonesia" << endl;
		
	}
	return 0;
}