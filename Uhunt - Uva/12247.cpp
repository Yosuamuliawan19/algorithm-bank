#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>

// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	// ios_base::sync_with_stdio(false);
	map<int,bool> m;
	int a[3];
	int b[2];
	while (cin >> a[0] >>  a[1] >>  a[2] >> b[0] >> b[1]){
		if (!a[0] &&  !a[1] &&  !a[2] && !b[0] && !b[1]) break;
		m.clear();
		m[a[0]] = 1;
		m[a[1]] = 1;
		m[a[2]] = 1;
		m[b[0]] = 1;
		m[b[1]] = 1;
		sort(a,a+3);
		sort(b,b+2);
		for (int i=1;i>=0;i--){
			for (int j=0;j<3;j++){
				if (a[j] > b[i]){
					// cout << a[j] << " "<< b[i] << endl;
					a[j] = -1;
					b[i] = 1000;
					break;
				}
			}
		}

		int cnt = 0;
		int mx = -1;
		for (int i=0;i<3;i++){
			if (a[i] == -1) cnt ++;
			mx = max(mx, a[i]);
 		}
		if (cnt > 1){
			cout << -1 << endl;
		}else if (cnt == 1){
			mx ++;
			while (m.find(mx) != m.end()) mx++;
			if (mx > 52) mx = -1;
			cout << mx << endl;
		}else if (cnt == 0){
			mx = 1;
			while (m.find(mx)!=m.end())mx++;
			if (mx > 52) mx =-1;
			cout << mx << endl;
		}


	}
	return 0;
}
