#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int a , b;
int rows[8] = {};
int curline = 0;
bool check ( int r , int c){
	for (int i = 0; i < c; ++i)
	{
		if (rows[i] == r || abs(i - c) == abs(rows[i] - r)) return false;
	}
	return true;
}
void back (int c){
	if (c == 8 && rows[b] == a){
		
		if (curline < 9) cout << " " ;
		cout << ++curline << "      ";
		
		cout  << rows[0] + 1 ;
		for (int i = 1; i < 8; ++i)
		{
			cout << " " << rows[i] + 1;
		}
		cout << endl;
	}
	for (int i = 0; i < 8; ++i)
	{
		if (check(i,c)){
			rows[c] = i;
			back (c+1);
		}
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		memset(rows, 0 , sizeof rows);
		curline = 0;
		cin >> a >> b;
		cin.ignore();
		b--;a--;
		cout << "SOLN       COLUMN" << endl;
		cout << " #      1 2 3 4 5 6 7 8" << endl << endl;
		back(0);
		if (i != n - 1){
			cout << endl;
		}
	}
	return 0;
}