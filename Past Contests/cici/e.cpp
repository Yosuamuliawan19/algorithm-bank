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
int parent[20];
int findParent(int a){
     return parent[a] == a ? a : parent[a] = findParent(parent[a]);
}
bool sameSet(int a, int b){
     return findParent(a) == findParent(b);
}
void unify(int a, int b){
     a = findParent(a);
     b = findParent(b);
     if (a > b){
          parent[b] = a;
     }else{
          parent[a] = b;
     }
}
int main()
{
     int n, m, a, b, c;
     while (cin >> n >> m){
          for (int i=0;i<n;i++) parent[i] = i;
          vector< pair<int,pair<int,int> > > q;
          int tot = 0;
          for (int i=0;i<m;i++){
               cin >> a >> b >> c;
               q.pb(mp(a,mp(b,c)));
               tot += a;
          }
          sort(q.begin(),q.end(), greater<pair<int,pair<int,int> > >());
          for (int i=0;i<m;i++){
               if (!sameSet(q[i].se.se, q[i].se.fi)){
                    unify(q[i].se.se,q[i].se.fi);
                    tot -= q[i].fi;
               }
          }
          cout << tot << endl;
     }



	return 0;
}
