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
     int n;
     string s;
     cin >> n;
     int cur = 0, ans = 0;
     bool isval = 0;


     cin >> s;
     for (int i=0;i<n;i++){
          if (s[i] == 'U'){
               cur ++;
          }else{
               cur --;
          }
          // cout << cur << endl;
          if (!isval && cur < 0){
               isval = 1;
               ans ++;
          }else if (isval && cur >= 0){
               isval = 0;
          }
     }
     cout << ans << endl;

	return 0;
}
