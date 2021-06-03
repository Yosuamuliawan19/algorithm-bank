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
int tc,arr[3];
int main()
{
     bool f = 1;
	cin >> tc;
     while (tc--){
          cin >> arr[0] >> arr[1] >> arr[2];
          sort(arr, arr+3);
          if (arr[2] >= arr[1] + arr[0]) f = 0;
     }
     if (f) cout << "YES\n";
     else cout << "NO\n";

	return 0;
}
