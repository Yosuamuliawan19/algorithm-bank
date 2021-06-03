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
int n, m, r, arr[100100],tmp;
int main()
{
	cin >> n >> m >> r;
     for (int i=0;i<m;i++){
          cin >> tmp;
          arr[tmp-1] = 1;
     }
     int ans = 0;
     for (int i=0;i<n-r;i++){
          int cnt = 0;
          for (int j=i;j<i+r;j++){
               if (arr[j] == 1) cnt ++;
          }
          if (cnt < 2){
               // cout << i+r-1<< endl;
               arr[i+r-1] = 1;
               ans ++;
               i = i+r-1;
          }
     }
     cout << ans << endl;

	return 0;
}
