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
int n,s;
string ans = "";
void dp (string st, int sum, int dep, ){
     if (dep == n){
          if (sum == s){
               ans = (ans < st ? ans : st );
          }
          return ;
     }
     for (int i=1;i<=9;i++){
          dp(st + (char)(i + '0'), sum + i, dep + 1);
     }
}
int main(int argc, char const *argv[])
{

	cin >> n >> s;
     for (int i=0;i<9;i++) ans += '9';
     dp("", 0, 0);
     cout << ans << endl;
	return 0;
}
