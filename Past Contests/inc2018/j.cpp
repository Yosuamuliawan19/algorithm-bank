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
ll n, m, arr[100010];
int main()
{
     cin >> n >> m;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     sort(arr, arr+n);
     int dv = ceil((double)n/m);
     int mn = 0, mx = 0;
     for (int i=0;i<m;i++) mn += arr[i];
     
     cout << mn << " " << mx << endl;


	return 0;
}
