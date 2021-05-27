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

     string s;
     cin >> s;
     int arr[26] = {0};
     for (int i=0;i<s.length();i++){
          arr[s[i]-'a']++;
     }
     int odd = 0;
     for (int i=0;i<26;i++){
          if (arr[i] % 2 != 0) odd++;
     }
     cout << odd << endl;

	return 0;
}
