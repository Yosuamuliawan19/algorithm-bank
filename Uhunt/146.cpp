#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	int arr[100100];
	int cur, idx = 0;
	while (cin >> arr[idx++]){
		sort(arr, arr+idx);
		if (idx%2 == 0){
			int a = arr[(idx-1)/2];
			int b = arr[1+ ((idx-1)/2)];
			cout << (a+b)/2 << endl;
		}else{
			cout << arr[idx/2]<< endl;
		}
	}
	return 0;
}
