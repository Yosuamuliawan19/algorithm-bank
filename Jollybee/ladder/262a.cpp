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
     int n, k;
     string s;
     cin >> n >> k;
     int ans = 0;
     for (int i=0;i<n;i++){
          cin >> s;
          int cnt = 0;
          for (int j=0;j<s.length();j++) if (s[j] == '4' || s[j] == '7') cnt++;
          if (cnt <= k) ans ++;
     }
     cout << ans <<endl;
	return 0;
}
