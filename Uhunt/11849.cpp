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


// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
     ll n, m, cur;
     while (cin >> n >> m){
          set<ll> st;
          if (!n && !m) break;
          for (ll i=0;i<n;i++){
               cin >> cur;
               st.insert(cur);
          }
          ll cnt = 0;
          for (ll i=0;i<m;i++){
               cin >> cur;
               if(st.find(cur) != st.end()) cnt ++;
               else st.insert(cur);
          }
          cout << cnt << endl;
     }

	return 0;
}
