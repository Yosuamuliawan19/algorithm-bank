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
     int n, mx = INT_MIN, cnt = 0;
     int l[1000000], r[1000000];
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> l[i] >> r[i];
          mx = max(mx, l[i]);
     }
     for (int i=0;i<n;i++){
          if (l[i] <= mx && mx <= r[i]) cnt ++;
     }

     cout << cnt << endl;

	return 0;
}
