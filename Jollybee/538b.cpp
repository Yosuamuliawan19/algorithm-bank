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

int main()
{
     string s;
     cin >> s;
     int len = s.length(), mx = 0;
     for (int i=0;i<len;i++){
          mx = max(mx, s[i]-'0');
     }
     string tmp = "";
     for (int i=0;i<mx;i++) tmp += '-';
     vector<string> ans(mx, tmp);

     for (int i=0;i<len;i++){
          int cur = s[i]-'0';
          for (int j=0;j<cur;j++){
               ans[j][i] = '1';
          }
     }

     for (int i=0;i<mx;i++){
          if (i!=0) cout << " ";
          cout << ans[i];
     }
     cout << endl;


	return 0;
}
