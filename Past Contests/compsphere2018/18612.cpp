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
     string s1, s2;
     int idx = 0;
     bool killed[1000000] = {0};
     int kills[1000000] = {0};
     map<string,int> m1;
     map<int,string> m2;

     while (cin >> s1 >> s2){
          if (m1.find(s1) == m1.end()){
               m1[s1] = idx++;
               m2[idx-1] = s1;
          }
          if (m1.find(s2) == m1.end()){
               m1[s2] = idx++;
               m2[idx-1] = s2;
          }
          int idx1 = m1[s1], idx2 = m1[s2];
          killed[idx2] = 1;
          kills[idx1] ++;
     }
     vector<pair<string, ll> > ans;
     for (int i=0;i<idx;i++){
          if (killed[i] == 0){
               ans.pb(mp(m2[i], kills[i]));
          }
     }
     cout << "HALL OF MURDERERS\n";
     sort(ans.begin(), ans.end());
     for (int i=0;i<ans.size();i++){
          cout << ans[i].fi << " "<< ans[i].se<< endl;
     }


	return 0;
}
