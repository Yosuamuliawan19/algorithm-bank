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
vector<pair<int,int> > st[500000];
bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
     if (a.fi.fi != b.fi.fi){
          return a.fi.fi < b.fi.fi;
     }else{
          if (b.fi.se != b.fi.se){
               return a.fi.se < b.fi.se;
          }else{
               return a.se > b.se;
          }
     }
}
elem combine(elem a, elem b){
     elem ret;
     ret.se = max(a.se, b.se);
     return ret;
}
void build(int node, int start, int end){
     if (start == end){
          st[node].se = v[start].se;
     }else{
          int m = start+(end-start)/2;
          build(node*2, start, m);
          build(node*2+1, m+1, end);
          st[node] = combine(st[node*2], st[node*2+1]);
     }
}
elem query(int node, int start, int end, int l, int r){
     if (start > end || start > r || end < l) return dummy;
     if (start >= l && r <= end){
          return st[node];
     }
     int mid = start + (end-start)/2;
     elem p1 = query(node*2, start, mid, l, r);
     elem p2 = query(node*2+1, mid+1, end, l, r);
     return combine(p1,p2);
}
void update(int node, int start, int end, int idx, int val){
     if (start > idx || end < idx || start > end) return;
     if (start >= idx && end <= idx){
          st[node].se = val;
          return;
     }else{
          int mid = start + (end-start)/2;
          update(node*2, start, mid, idx, val);
          update(node*2+1, mid+1, end, idx, val);
          st[node] = combine(st[node*2], st[node*2+1]);
     }
}
int main(int argc, char const *argv[])
{
     int n,b,f,d;
     vector<pair<pair<int,int>, int> > v;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> b >> f >> d;
          v.pb(mp(mp(b,f), d));
     }
     sort(v.begin(),v.end(), cmp);
     build(1,1,n);
     int val[100010] = {0};
     for (int i=n-1;i>=0;i--){





     }
	return 0;
}
