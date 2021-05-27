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
int n, m;
int solve(int x, int y){
     // cout << x <<  " " << y << endl;
     if (x > n || y > m) return 0;
     if (x == n && y == m) return 1;
     return solve(x+1,y) + solve(x,y+1);
}
int main(int argc, char const *argv[])
{
     cin >> n >> m;
     cout << solve(1,1) << endl;

	return 0;
}
