#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	string x;
	cin >> x;

	bool is1 = true;
	if (x[0] == '0'){
		is1 = false;
	}

	int count = 1;
	for (int i = 1; i < x.length(); ++i)
	{
		if (is1){
			if (x[i] == '0'){
				count = 1;
				is1 = false;
			}else{
				count ++;
				if (count >= 7){
					cout << "YES";
					return 0;
				}
			}
		}else{
			if (x[i] == '1'){
				count = 1;
				is1 = true;
			}else{
				count ++;
				if (count >= 7){
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
}