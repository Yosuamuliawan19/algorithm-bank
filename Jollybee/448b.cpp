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
     string s, t;
     cin >> s >> t;
     if (s.length() < t.length()){
          cout << "need tree\n";
     }
     int arr1[26] = {0}, arr2[26] = {0};
     for (int i=0;i<s.length();i++){
          arr1[s[i]-'a'] ++;
     }
     for (int i=0;i<t.length();i++){
          arr2[t[i]-'a'] ++;
     }
     bool impos = 0, del = 0;
     for (int i=0;i<26;i++){
          if (arr1[i] < arr2[i]) impos = 1;

          if (arr2[i] > arr2[i]) del = 1;
     }
     if (impos) cout << "need tree\n";
     else if (del) cout << "automaton\n";
     else cout << "array\n";
	return 0;
}
