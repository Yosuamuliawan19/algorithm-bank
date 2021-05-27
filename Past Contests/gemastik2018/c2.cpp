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
int tc,n;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n;
          if (n == 1) cout << 1 << endl;
          else if (n == 2) cout << 3 << endl;
          else if (n == 3) cout << 21 << endl;
          else if (n == 4) cout << 282 << endl;
          else if (n == 5) cout << 6210 << endl;
     }

	return 0;
}
