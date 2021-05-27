#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	cin.ignore(); 
	for (int i = 0; i < tc; ++i)
	{
		string x;
		getline(cin,x);
		int press = 0;
		for (int i = 0; i < x.length(); ++i)
		{
			char a = x[i];
			if (a == ' '){
				press ++;
				continue;
			}else if (a <= 99){
				press += a - 96;
			}else if (a <= 102){
				press += a - 99;
			}else if (a <= 105){
				press += a - 102;
			}else if (a <= 108){
				press += a - 105;
			}else if (a <= 111){
				press += a - 108;
			}else if (a <= 115){
				press += a - 111;
			}else if (a <= 118){
				press += a - 115;
			}else if (a <= 122){
				press += a - 118;
			}
		}
		cout << "Case #" << i+1 <<": " << press <<  endl;
	}
	return 0;
}