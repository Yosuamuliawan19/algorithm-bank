// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
bool f = 0;
string ans = "";
void dp(int cur, string s){
     if (f || cur < 0) return;
     int a = cur - 1, b = cur - 2;
     if (a == 0){
          s += 'A';
          ans = s;
          f = 1;
          return ;
     }
     if (b == 0){
          s += 'B';
          ans = s;
          f = 1;
          return;
     }
     if ((int)(a/2) - ((double)a/2.0) == 0){
          dp (a/2, s+'A');
     }
     if ((int)(b/2) - ((double)b/2.0) == 0){
          dp (b/2, s+'B');
     }
}
int main()
{
	int n;
     cin >> n;
     dp (n, "");
     reverse(ans.begin(), ans.end());
     cout << ans << endl;
	return 0;
}
