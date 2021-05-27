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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

int n, cnt = 0, arr[5] = {50, 25, 10 ,5 , 1};
int memo[10000][5] = {0};
int dp(int cur, int idx){
     if (cur == 0) return 1;
     if (cur < 0) return 0;
     if (memo[cur][idx] != -1) return memo[cur][idx];
     if (cur >= 1 && idx >= 5) return 0;
     return memo[cur][idx]= (dp(cur-arr[idx], idx) + dp(cur, idx+1));
}

int main(int argc, char const *argv[])
{
     for (int i=0;i<10000;i++){
          for (int j=0;j<5;j++){
               memo[i][j] = -1;
          }
     }
	while (cin >> n){
          cout << dp (n, 0) << endl;
     }

	return 0;
}
