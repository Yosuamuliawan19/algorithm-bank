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
     int len = s.length(), idx;
     char last = s[len-1];
     bool f = 0;
     for (int i=len-1;i>=0;i--){
          if ((s[i]-'0')%2 == 0){
               if (!f) idx = i;
               f = 1;
               if (last > s[i]) idx = i;
          }

     }
     if (!f){
          cout << -1 << endl;
     }else{
          swap(s[idx], s[len-1]);
          cout << s << endl;
     }

	return 0;
}
