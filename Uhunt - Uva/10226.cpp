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
	int tc, t = 0;
	string s;
	scanf("%d\n", &tc);
	while (tc--){
		t++; if (t != 1) cout << endl;
		map<string,int> m;
		int cnt = 0;
		while (getline(cin,s)){
			if (s == "") break;
			m[s] ++;
			cnt ++;
		}
		for (map<string,int>::iterator it=m.begin();it!=m.end();it++){
			cout << setprecision(4) << fixed <<  it->first << " " << (double) 100 * it->second / cnt<< endl;
		}

	}

	return 0;
}
