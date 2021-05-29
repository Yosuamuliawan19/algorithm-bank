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
#include<sstream>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

string toUpper(string s){
	for (int i=0;i<s.length();i++){
		if (s[i] >= 'a') s[i] -=32;
	}
	return s;
}
string toLower(string s){
	for (int i=0;i<s.length();i++){
		if (s[i] < 'a') s[i] +=32;
	}
	return s;
}
int main(int argc, char const *argv[])
{
	string s, cur, tmp1;
	set<string> st;
	while (getline(cin ,s)){
		if (s == "::") break;
		st.insert(s);
	}
	vector<pair<string, pair<int, string> > >  lst;
	int line = 0;
	while (getline(cin, s)){
		line++;
		stringstream ss(s);
		string bef = "";
		int idx = 0;
		while (ss >> cur) {
			idx++;
			stringstream sss(s);
			int idxx = 0;
			while (idxx++ != idx) sss >> tmp1;
			string nw = bef + " " + toUpper(cur);
			while (sss >> tmp1) nw += " " + toLower(tmp1);
			if (st.find(toLower(cur)) == st.end()){
				// cout << cur << endl;
				lst.push_back(make_pair(toUpper(cur), make_pair(line,nw)));
			}
			bef += " " + toLower(cur);
		}
	}
	sort(lst.begin(),lst.end());
	for (int i=0;i<lst.size();i++){
		string tmp = lst[i].second.second;
		tmp = tmp.substr(1, tmp.size()-1);
		cout << tmp  << endl;
	}
	return 0;
}
