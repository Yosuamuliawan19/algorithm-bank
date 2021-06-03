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
string s, p;
int main()
{
	int arr[26]={0};
     cin >> s >> p;
     for (int i=0;i<s.length();i++){
          arr[s[i]-'a'] ++;
     }
     bool f = 1;
     for (int i=0;i<p.length();i++){
          int cur = p[i]-'a';
          arr[cur] --;
          if (arr[cur] < 0) {
               // cout/ << (char)(cur+'a') << " " << "notfound\n";
               f = 0;
               break;
          }
     }
     if (f){
          cout << "YES\n";
     }else{
          cout << "NO\n";
     }


	return 0;
}
