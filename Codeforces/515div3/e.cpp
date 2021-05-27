// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
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
int btod(string b)
{
     int d = 0;
     int cnt = 0;
     for (int i=b.size()-1;i>=0;i--){
          if (b[i] == '1') d += pow(2, cnt);
          cnt ++;
     }
     return d;
}
int main()
{
     int a, b;
     cin >> a >> b;
	string x, y;
     cin >> x >> y;
     a = btod(x);
     b = btod(y);
     ll ans = 0;
     while (b != 0){
          ans = (ans + (a&b))%(998244353);
          b = b >> 1;
     }
     cout << ans << endl;


	return 0;
}
