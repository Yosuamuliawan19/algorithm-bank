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
ll n, d;
ll arr[110];
int main()
{
	cin >> n >> d;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     ll tot = arr[n-1];
     ll ans = 2*(n-1);

     for (int i=0;i<n-1;i++){
          arr[i] += 10;
          tot += arr[i];
     }
     // cout << tot/  << endl;
     if (tot > d){
          cout << -1 << endl;
          return 0;
     }
     // cout << ans << tot << endl;
     while (tot <= d-5){
          tot += 5;
          ans ++;
     }
     cout << ans << endl;

	return 0;
}
