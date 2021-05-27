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
	int n;
	cin >> n;
	int max = 1;
	int streak = 1;
	int prev = 0;
	cin >> prev;
	for (int i = 1; i < n; ++i)
	{
		int temp;;
		cin >> temp;
		if (temp >= prev){
			streak ++;
		}else{
			if (streak > max){
				max = streak;
			}
			streak = 1;
		}
		//	cout << streak << endl ;
		if (i == n -1  && streak > max){
			max = streak;
		}
		prev = temp;
	}
	cout << max << endl;
	return 0;
}