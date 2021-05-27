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
#include<set>
#include<queue>
#include<string>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
	ll n , m, tmp;
     cin >> n >> m;
     ll tot = 0;
     for (int i=0;i<n;i++){
          if (i!=0) cout <<" ";
          cin >> tmp;
          tot += tmp; ll cur = tot / m;
          if (cur > 0){
               cout << cur;
               tot %= m;
          }else{
               cout << 0;
          }
     }
     cout << endl;
	return 0;
}
