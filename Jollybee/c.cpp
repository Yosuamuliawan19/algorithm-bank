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
int tc, n, m, arr[700] = {0};
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n >> m;
          memset(arr, 0, sizeof(arr));
          for (int i=1;i<=n+m-2;i++){
               if (i != 1) cout << ' ';
               cout << arr[i];
          }
     }
	return 0;
}
