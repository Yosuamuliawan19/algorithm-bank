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
	string s,s1, tmp;
	vector<pair<string,string> > books;

	while (cin >> s){
		if (s == "END") break;
		while (s[s.length()-1] != '\"'){
			cin >> tmp;
			s+= " " + tmp;
		}
		cin >> tmp;
		getline(cin, s1);
		books.push_back(make_pair(s1,s));
	}
	sort(books.begin(), books.end());
	map<string, int> m;
	for (int i=0;i<books.size();i++){
		m[books[i].second] = 2;
	}
	string prev = "";
	while (cin >> s){
		if (s == "END") break;
		cin.ignore();
		if (s == "BORROW"){
			getline(cin, s);
			m[s] = 1;
		}else if (s == "RETURN"){
			getline(cin, s);
			m[s] = 0;
		}else{
			vector<string> ans;

			for (int i=0;i<books.size();i++){
				if (m[books[i].second] == 0){
					m[books[i].second] = 2;
					if (prev != "")
					ans.push_back("Put " + books[i].second + " after " + books[i-1].second);
					else
					ans.push_back("Put " + books[i].second + " first " );

					prev = books[i].second;
				}
			}
			for (int i=0;i<ans.size();i++){
				cout << ans[i] << endl;
			}
			cout << "END\n";
		}
	}


	return 0;
}
