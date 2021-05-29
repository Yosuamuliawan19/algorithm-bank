#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<string>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
	ll tc,n, tmp;
	cin >> tc;
	// cout << tc << endl;
	while(tc--){
		cin >> n;
		map<ll,bool> m;
		ll ans = 0;
		ll mx = 1;
		for (ll i=0;i<n;i++){
			cin >> tmp;
			if (m.find(tmp) != m.end()){
				mx = max(mx, ans);
				ans = 1;
				m.clear();
			}else{
				ans++;
				m[tmp] =1;
			}
		}

		cout << mx << endl;
	}
	return 0;
}
