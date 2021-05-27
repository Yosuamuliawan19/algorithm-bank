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
int n, x, q;
char c;
string s;
int main()
{
	cin >> n >> x >> s >> q;
     string ans = "";
     ans += s[x-1];
     for (int i=0;i<q;i++){
          cin >> c;
          if (c == 'L'){
               x--;
          }else{
               x++;
          }
          ans += s[x-1];
     }
     cout << ans <<endl;


	return 0;
}
