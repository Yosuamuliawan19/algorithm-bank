
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
int d, r, t;
int main()
{
     cin >> d >> r >> t;
     for (int i=0;i<5000;i++){
          int cr = 0, ct = 0;
          for (int j=4;j<i;j++) cr += j;
          for (int j=3;j<i-d;j++) ct += j;
          // cout << r-cr << " " << t-ct << endl;
          if (r-cr == ct-t){
               cout << r-cr << endl;
               break;
          }
     }
	return 0;
}
