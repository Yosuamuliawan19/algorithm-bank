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

int n, x, y, idx = 0;
map<pair<int,int>, bool > mapp;
vector<pair<int,int> > nodes;
vector<vector<pair<int,int> > > dist;
int man(int x, int y){
     int ret = abs(nodes[x].fi - nodes[y].fi) + abs(nodes[x].se - nodes[y].se);
     return ret;
}
int main(int argc, char const *argv[])
{

     scanf("%d", &y);
     for (int i=0;i<n;i++){
          scanf("%d %d", &x, &y);
          if (mapp.find(mp(x,y)) == mapp.end()){
               mapp[mp(x,y)] = 1;
               nodes.pb(mp(x,y));
               for (int i=0;i<nodes.size()-1;i++){
                    dist.pb()
               }
          }
     }
     vector<bool> vis(n,0);
     priority_queue<pair<int, int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
     pq.push(mp(0,0));
     while (!pq.empty()){
          pair<int,int> cur = pq.top();pq.pop();
          int curnode = cur.second, dist = cur.second;
          if (!vis[curnode]){
               vis[curnode] = 1;

          }
     }

	return 0;
}
