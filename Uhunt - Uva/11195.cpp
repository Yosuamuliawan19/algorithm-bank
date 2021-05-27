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
int res = 0;
int n;
bool row[15], ld[30] , rd[30];
string board[15];
void backtrack(int col){
	if (col == n){
		res++; return;
	}
	for (int i = 0; i < n; ++i)
	{
		if (board[i][col] != '*' &&!row[i] && !ld[ i - col + n - 1] && !rd[i + col]){
			row[i] = ld[i-col+n-1] = rd[i+col] = true;
			backtrack(col +1);
			row[i] =ld[i-col+n-1] = rd[i+col] = false;
		}
	}
}
int main(int argc, char const *argv[])
{
	int tc = 1;
	while (cin >> n){
		if (n == 0) break; 
		res = 0;
		memset(row,false,sizeof row);
		memset(ld,false,sizeof ld);	
		memset(rd,false,sizeof rd);

		for (int r = 0; r < n; ++r)
		{
			cin >> board[r];
		}
		backtrack(0);
		


		cout << "Case " << tc << ": "<< res << endl;
		tc++;
	}
	
	
	return 0;
}