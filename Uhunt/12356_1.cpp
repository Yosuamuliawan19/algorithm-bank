#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<list>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int s,b;
int x,y;
int lt[100000];
int rt[100000];

int fleft(int x){
	return lt[x];
}
int fright(int x){
	return rt[x];
}


int main(int argc, char const *argv[])
{

	while (cin >> s >> b){
		if (!s && !b) break;
		for (int i=0;i<s;i++) lt[i] = i-1;
		for (int i=0;i<s;i++) rt[i] = i+1;
		rt[s-1] = -1;
		for (int i=0;i<b;i++){
			cin >> x >> y;
			x--;y--;
			int a = fleft(x), b = fright(y);
			rt[a] = b;
			lt[b] = a;

			if (a == -1){
				cout << "* ";
			}else cout << a+1 << " ";
			if (b == -1){
				cout << "*\n";
			}else cout << b+1 << "\n";


		}
		cout << "-\n";
	}

	return 0;
}
