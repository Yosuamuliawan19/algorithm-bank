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
#include<queue>
#include<stack>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	int n,cur;
	while (cin >> n){
		if (!n) break;
		while (1){
			stack<int> s;
			bool stop = 0;
			int j = 1;
			for (int i=0;i<n;i++){
				cin >> cur;
				if (!cur){
					stop = 1; break;
				}
				for (;j<=cur;j++){
					s.push(j);
				}
				if (!s.empty() && s.top() == cur) {
					// cout << s.top() << endl;
					s.pop();
				}
			}
			if (stop) break;
			if (s.empty()) cout << "Yes\n";
			else cout << "No\n";
		}
		cout <<"\n";

	}
	return 0;
}
