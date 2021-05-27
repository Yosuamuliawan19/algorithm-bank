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


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

int  val = 1;
map<string,int> m;
void gen(string s){
	cout << s << " " << m[s] << endl;
	if (s.length() == 5) return;

	char start = 'a';
	if (s != "") start = s[s.length()-1]+1;
	string tmp[26], cur; int idx = 0;
	for (int i=start;i<='z';i++){
		cur = s + (char)start;
		m[cur] = m[s] + val++;
		tmp[idx++] = cur;
	}
	for (int i=0;i<idx;i++)gen(tmp[i]);
}

int main(int argc, char const *argv[])
{
	string s;
     m[""] = 0;
     gen("");
     while (cin >> s){
          cout << m[s] << endl;
     }

	return 0;
}
