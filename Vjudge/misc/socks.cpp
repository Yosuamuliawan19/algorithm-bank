#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int j, s , m;
	cin >> j >> s >> m;
	int count = 0;
	m-=j;

	while (true){
		if (m >= s){
			m -= s;
			count ++;
		}else{
			break;
		}
	}
	if (count % 2 == 0){cout << "Lucky chef";}
	else {cout << "Unlucky chef";}
	return 0;
}