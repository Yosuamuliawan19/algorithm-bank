// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
string s;
bool pal(string s){
     int  l = 0, r = s.length()-1;
     while (r > l){
          if (s[l] != s[r]) return 0;
          l++;r--;
     }
     return 1;
}
int main()
{
	while (cin >> s){
          bool suc = 1;
          for (int i=0;i<s.length();i++){
               string cur = "";
               for (int j=i;j<s.length();j++){
                    cur += s[j];
                    if (pal(cur) && (j-i+1)%2== 0){
                         suc = 0;
                         // cout << cur << endl;
                         break;
                    }
                    // cout << cur << endl;
               }
          }
          if (suc) cout << "Odd.\n";
          else cout << "Or not.\n";
     }
	return 0;
}
