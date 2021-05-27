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
ll n, arr[40];
int main()
{
	cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     sort(arr, arr+n, greater<ll>());
     ll cnt = 1 + arr[0];
     for (int i=1;i<n;i++){
          cnt += arr[i] * arr[i-1];
          arr[i] = arr[i] * arr[i-1];
     }
     cout << cnt << endl;
	return 0;
}
