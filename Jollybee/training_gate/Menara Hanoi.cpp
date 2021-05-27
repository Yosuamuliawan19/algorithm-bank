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
#include<queue>
#include <string.h>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n;
void solve(int n, char from, char to , char inter){
     if (n == 1) {
          cout << n << " " << from << " " << to << endl;
          return ;
     }
     solve(n-1,from,inter,to);
     cout << n << " " << from  << " " << to  << endl;
     solve(n-1,inter,to,from);
}
int main(int argc, char const *argv[])
{

     cin >> n;
     solve(n, 'A', 'C', 'B');

	return 0;
}
