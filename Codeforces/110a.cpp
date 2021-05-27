#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	string n;
	cin >> n;
	long long tot = 0;
	for (int i = 0; i < n.length(); ++i)
	{
		if (n[i] == '7' || n[i] == '4'){
			tot++;
		}
	}
	//cout << tot << endl;
	if (tot == 0){
		cout << "NO" << endl;
		return 0;
	}
	if (tot == 7 || tot == 4){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}