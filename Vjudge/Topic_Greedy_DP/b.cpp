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

string rem(string s){
     int idx = 0;
     string ret = "";
     while (s[idx] == '0') idx++;
     for (;idx<s.length();idx++){
          ret += s[idx];
     }
     return ret;
}

int main(int argc, char const *argv[])
{
     string s, tmp;
     int mx = 0;
     cin >> s;
     for (int i=0;i<s.length();i++){
          mx = max(s[i]-'0', mx);
          tmp += "0";
     }
     vector<string> v(mx, tmp);

     for (int i=0;i<s.length();i++){
          int cur = s[i]-'0';
          for (int j=0;j<cur;j++){
               v[j][i] = '1';
          }
     }
     cout << mx << endl;
     for (int i=0;i<mx;i++){
          if (i != 0) cout << " ";
          cout << rem(v[i]);
     }cout << endl;


	return 0;
}
