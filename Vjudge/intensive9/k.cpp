
// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
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
typedef pair<pair<int,int>,int> piii;
typedef pair<int,int> pii;
#define fi first
#define se second
#define mp make_pair

map<piii, set<piii> > mp1;
map<pii, set<pii> > mp2;
set<piii> st1;
set<pii> st2;
int n,x1,y1,z1,x2,y2,z2;
set<piii> vis1;
set<pii> vis2;
bool dfs(piii cur, piii prev){
     if (vis1.count(cur) != 0) return 1;
     vis1.insert(cur);
     for (set<piii>::iterator it=mp1[cur].begin();it!=mp1[cur].end();it++){
          piii nxt = *it ;
          if (nxt != prev && dfs(nxt, cur)){
               return 1;
          }
     }
     return 0;
}
bool dfs2(pii cur, pii prev){
     if (vis2.count(cur) != 0) return 1;
     vis2.insert(cur);
     for (set<pii>::iterator it=mp2[cur].begin();it!=mp2[cur].end();it++){
          pii nxt = *it ;
          if (nxt != prev && dfs2(nxt, cur)){
               return 1;
          }
     }
     return 0;
}

int main()
{
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
          piii a1 = mp(mp(x1,y1),z1);
          piii b1 = mp(mp(x2,y2),z2);
          pii a2 = mp(x1,y1);
          pii b2 = mp(x2,y2);
          st1.insert(a1);
          st1.insert(b1);
          mp1[a1].insert(b1);
          mp1[b1].insert(a1);
          if (a2 != b2){
               mp2[a2].insert(b2);
               mp2[b2].insert(a2);
          }
          st2.insert(a2);
          st2.insert(b2);
     }

     bool suc1 = 0, suc2 = 0;

     for (set<piii>::iterator it=st1.begin();it!=st1.end();it++){
          piii now = *it ;
          if (vis1.count(now) == 0){
               suc1 = suc1 | dfs(now, mp(mp(0,0),0));
          }
     }
     for (set<pii>::iterator it=st2.begin();it!=st2.end();it++){
          pii now = *it ;
          if (vis2.count(now) == 0){
               suc2 = suc2 | dfs2(now, mp(0,0));
          }
     }



     if (suc1){
          cout << "True closed chains\n";
     }else{
          cout << "No true closed chains\n";
     }
     if (suc2){
          cout << "Floor closed chains\n";
     }else{
          cout << "No floor closed chains\n";
     }
	return 0;
}
