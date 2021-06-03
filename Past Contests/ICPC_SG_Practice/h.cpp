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
int n,m,d,idx=0;
string a, b;
int ans = 0;
vector<int> topo;
vector<int> adj[100100];
vector<bool> vis;
map<string, int> mapp;
map<int, string> mapp2;
map<int,int> mapp3;
vector<bool> mark;
void dfs(int cur){
     // cout << cur << endl;
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               vis[nxt] = 1;
               dfs(nxt);
          }
     }
     topo.pb(cur);
}

int CeilIndex(std::vector<int> &v, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (v[m] >= key)
        r = m;
    else
        l = m;
    }

    return r;
}

int lis(std::vector<int> &v) {
    if (v.size() == 0) return 0;
    std::vector<int> tail(v.size(), 0);
    int length = 1;
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            tail[length++] = v[i];
        else
            tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
    }
    return length;
}
int main(int argc, char const *argv[])
{
     scanf("%d%d%d",&n,&m,&d);
     mark = vector<bool>(n, 0);
     for (int i=0;i<m;i++){
          cin >> a >> b;
          if (mapp.find(a) == mapp.end()){
               mapp2[idx] = a;
               mapp[a] = idx;
               // cout << a << " " << idx<< endl;
               idx++;
          }
          if (mapp.find(b) == mapp.end()){
               mapp2[idx] = b;
               mapp[b] = idx;
               // cout << b << " " << idx<< endl;
               idx++;
          }
          adj[mapp[a]].pb(mapp[b]);
          // cout << mapp[a] << " "<< mapp[b] << endl;
          mark[mapp[b]] = 1;
     }
     vector<int> v;
     vis = vector<bool>(idx, 0);
     for (int i=0;i<n;i++){
          if (mark[i] == 0) {
               dfs(i);
          }
     }
     int cur = 0;
     for (int i=topo.size()-1;i>=0;i--){
          mapp3[topo[i]] = cur++;
          // cout << mapp3[topo[i]] << " ";
     }
     // cout << endl;
     // cout <<"---/-\n";
     for (int i=0;i<n;i++){
          cin >> a;
          if (mapp.find(a) != mapp.end()){
               v.pb(mapp3[mapp[a]]);
               // cout << mapp3[mapp[a]] << endl;
          }else{
               ans ++;
          }
     }
     int len = lis(v);
     ans += (idx-len) + (v.size()-len) ;
     // cout << len << endl;
     cout << ans << endl;
	return 0;
}
