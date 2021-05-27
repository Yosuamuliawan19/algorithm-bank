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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)



int main(int argc, char const *argv[])
{
     string s;
     cin >> s;
     int len = s.length()/2;

     int val =  0;
     for (int i=0;i<len;i++){
          val += (s[i]-'A');
     }
     for (int i=0;i<len;i++){
          s[i] =(((s[i]-'A') + val) % 26) + 'A';
     }
     val = 0;
     for (int i=len;i<s.length();i++){
          val += (s[i]-'A');
     }
     for (int i=len;i<s.length();i++){
          s[i] =(((s[i]-'A') + val) % 26) + 'A';
     }
     string ans = "";
     for (int i=0;i<len;i++){
          ans += (((s[i]-'A') + (s[i+len]-'A')) % 26) + 'A';
     }
     cout << ans << endl;
	return 0;
}
