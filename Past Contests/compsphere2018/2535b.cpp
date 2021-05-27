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
     ll n, cnt = 0;
     string species, breed, name, dummy;

     scanf("%lld\n",&n);
     for (int i=0;i<n;i++){
          getline(cin, species);
          getline(cin, breed);
          getline(cin, name);
          getline(cin, dummy);
          if (species != "cachorro") continue;
          // cout << "pass 1" << endl;
          // cout << name << endl;
          bool f = 0;
          for (int j=0;j<name.length();j++){
               if (name[j] == ' ') f = 1;
          }
          if (!f) continue;
          // cout << "pass 2"/ << endl;

          f = 0;
          if (name[0] == breed[0]) f = 1;
          for (int j=0;j<name.length();j++){
               if (name[j] == ' '){
                    if (name[j+1] == breed[0]) f = 1;
               }
          }
          if (!f) continue;
          // cout << "pass 3" << endl;

          cnt ++;
     }
     cout << cnt << endl;

	return 0;
}
