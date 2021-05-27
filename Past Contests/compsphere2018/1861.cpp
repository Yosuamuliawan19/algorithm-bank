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
     map<string, int> mapp;
     map<int,string> mapp2;

     int idx = 0;
     string s1, s2;
     vector<bool> killed;
     vector<pair<int,int> > list;
     while (cin >> s1 >> s2){
          int idx1,idx2;
          if (mapp.find(s1) == mapp.end()){
               mapp[s1] = idx++;
               mapp2[idx-1] = s1;
               killed.pb(0);
          }
          if (mapp.find(s2) == mapp.end()){
               mapp[s2] = idx++;
               mapp2[idx-1] = s2;
               killed.pb(1);
          }
          idx1 = mapp[s1];
          idx2 = mapp[s2];
          killed[idx2] = 1;
          list.pb(mp(idx1,idx2));
     }
     for (int i=0;i<list.size();i++){
          killed[list[i].se] = 1;
     }
     vector<set<int> > kills(idx, set<int>());
     for (int i=0;i<list.size();i++){
          if (killed[list[i].fi] == 0){
               kills[list[i].fi].insert(list[i].se);
          }
     }
     vector<pair<string,int> > res;
     for (int i=0;i<idx;i++){
          if (kills[i].size() != 0) {
               res.pb(mp(mapp2[i], kills[i].size()));
          }
     }
     cout << "HALL OF MURDERERS\n";
     sort(res.begin(), res.end());
     for (int i=0;i<res.size();i++){
          cout << res[i].fi << " " << res[i].se << endl;
     }


	return 0;
}
