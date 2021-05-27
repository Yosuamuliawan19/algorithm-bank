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
     ll n, len;
     cin >> s >> n;
     len = s.length();
     ll cnt = 0;


     for (ll i=0;i<len;i++){
          if (s[i] == 'a') cnt ++;
     }

     cnt *= (ll)(n/len);

     for (ll i=0;i<n%len;i++){
          if (s[i] == 'a') cnt ++;
     }
     cout << cnt << endl;




	return 0;
}
