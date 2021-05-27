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
	int n;
     string s;
     map<string,int> mp;
     mp["red"] = 1;
     mp["yellow"] = 2;
     mp["green"] = 3;
     mp["brown"] = 4;
     mp["blue"] = 5;
     mp["pink"] = 6;
     mp["black"] = 7;
     cin >> n;
     int tot = 0, mx = -1, red = 0;
     for (int i=0;i<n;i++){
          cin >> s;
          if (s == "red") red ++;
          else{
               tot += mp[s];
               if (mp[s] > mx){
                    mx = mp[s];
               }
          }
     }
     // cout << mx << " mx \n";
     int ans = 0;
     ans = (mx+1)*red;
     ans += (tot);
     if (mx == -1){
          ans = 1;
     }
     cout << ans << endl;


	return 0;
}
