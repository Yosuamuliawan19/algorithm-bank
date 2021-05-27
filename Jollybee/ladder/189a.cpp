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

int n, a, b, c;
int main()
{

     cin >> n >> a >> b >> c;

     int mx = 0;
     for (int i=0;i<=n;i++){
          for (int j=0;j<=n;j++){
               int k = n - (a*i) - (b*j);
               if (k >= 0 && k%c == 0){
                    mx = max(mx, (k/c) + i + j);
               }
          }
     }
     cout << mx << endl;
	return 0;
}
