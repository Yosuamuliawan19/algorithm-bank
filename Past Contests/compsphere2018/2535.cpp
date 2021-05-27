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

	ll n, cnt = 0;
	string species, breed, name, dummy, d2;


	getline(cin, dummy);
	stringstream ss(dummy);
	ss >> n;
	set<pair<string,pair<string,string> > > st;
	for (int i=0;i<n;i++){
		getline(cin, species);
		getline(cin, breed);
		getline(cin, name);
		getline(cin, dummy);
		bool a = 0, b = 0, c = 0;
		if (species == "cachorro") a = 1;

		int cur = 0;
		dummy = name;
		stringstream ss(dummy);
		while (ss >> d2) {
			// cout << d2 << endl;
			cur ++;
		}
		if (cur > 1) b = 1;


		// set<char> st;
		// for (int i=0;i<breed.size();i++){
		// 	if (i == 0 || breed[i-1] == ' '){
		// 		st.insert(breed[i]);
		// 		// cout << breed[i] << endl;
		// 	}
		// }
		// st.insert(breed[0]);
		// cout << name << endl;
		for (int i=0;i<name.size();i++){
			if (i == 0 || name[i-1] == ' '){
				// if (st.find(name[i]) != st.end()){
				// 	c = 1;
				// 	break;
				// }
				// cout << name[i] << endl;
				if (name[i] == breed[0]){

					c = 1;
				}
			}
		}
		// cout << a << " " << b << " " << c << endl;
		if (a && b && c){
			st.insert(mp(species, mp(name, breed)));
		}
		// cout << "-------\n";
	}

	cout << st.size() << endl;


	return 0;
}
