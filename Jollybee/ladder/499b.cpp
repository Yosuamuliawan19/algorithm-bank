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
     int n, m;
     map<string,string> mp;
     string s1, s2;
     cin >> n >> m;
     for (int i=0;i<m;i++){
          cin >> s1 >> s2;
          string s;
          if (s1.length() > s2.length()){
               s = s2;
          }else{
               s = s1;
          }
          mp[s1] = s;
          mp[s2] = s;
     }
     for (int i=0;i<n;i++){
          cin >> s1;
          if (i != 0) cout << " " ;
          cout << mp[s1] ;
     }
	return 0;
}
