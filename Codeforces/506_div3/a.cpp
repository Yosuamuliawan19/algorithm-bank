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
	int n, k;
     string s;
     cin >> n >> k;
     cin >> s;
     int minidx = n;
     for (int i=1;i<s.length();i++){
          bool f = 1;
          int idx = i;
          for (int j=0;j<s.length();j++){
               if (s[j] == s[idx]){
                    idx ++; if (idx == n) break;
               }else{
                    f = 0;
               }
          }

          if (f){
               minidx = i;
               break;
          }
     }
     for (int i=0;i<k;i++){
          for (int j=0;j<minidx;j++){
               cout << s[j];
          }
     }
     for (int i=minidx;i<s.length();i++){
          cout << s[i];
     }
     cout << endl;
     // cout << minidx << endl;


	return 0;
}
