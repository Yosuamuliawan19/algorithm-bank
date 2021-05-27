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
	ll tc,arr[1100]={0}, arr2[1100]={0}, tot1 = 0, tot2 = 0, n, m;
	cin >> tc;
	while (tc--){
		cin >> n >> m;
		memset(arr,0,sizeof(arr));
		memset(arr2,0,sizeof(arr2));
		for (ll i=0;i<n-1;i++) {
			cin >> arr[i];
			tot1 += arr[i];
		}
		for (ll i=0;i<m-1;i++) {
			cin >> arr2[i];
			tot2 += arr2[i];
		}
		sort(arr, arr+n-1, greater<ll>());
		sort(arr2, arr2+m-1, greater<ll>());
		n--;m--;

		ll ans = 0, i1 = 0, i2 = 0;
		while (i1 < n || i2 < m){
			ll x = arr[i1], y = arr2[i2];
			if (i1 < n && x>y){
				// cout << x << " i1\n";
				ans += x+tot2;
				tot1 -= x;
				i1++;
			}else{
				// cout << y << " i2\n";
				ans += y+tot1;
				tot2 -= y;
				i2++;
			}
		}
		cout << ans << endl;

	}




	return 0;
}
