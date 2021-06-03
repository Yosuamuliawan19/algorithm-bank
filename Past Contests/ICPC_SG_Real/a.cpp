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

int n;
string s;
vector<string> v;
vector<pair<int,int> > start;
vector<vector<bool> > vis;
int dx[8] = {1,-1,1,-1,2,-2,2,-2};
int dy[8] = {2,2,-2,-2,1,1,-1,-1};
bool found = 0;
string match = "ICPCASIASG";
void dfs(int x, int y, int idx){
     if (idx == 10 || found == 1){
          found = 1;
          return;
     }
     for (int i=0;i<8;i++){
          int a = x + dx[i], b = y + dy[i];
          if (a >= 0 && a < n && b >= 0 && b < n && v[a][b] == match[idx]){
               vis[a][b] = 1;
               dfs(a,b,idx+1);
               vis[a][b] = 0;
          }
     }
}


int main(int argc, char const *argv[])
{

     scanf("%d",&n);
     cin >> s;
     vis = vector<vector<bool> > (n, vector<bool> (n, 0));
     for (int i=0;i<n;i++){
          string tmp = s.substr(n*i, n);
          v.pb(tmp);
          // cout << tmp << endl;
          for (int j=0;j<n;j++){
               if (tmp[j] == 'I'){
                    start.pb(mp(i, j));
                    // cout << i << " " << j << endl;
               }
          }
     }
     for (int i=0;i<start.size();i++){
          dfs(start[i].fi, start[i].se, 1);
     }
     if (found){
          cout << "YES\n";
     }else{
          cout << "NO\n";
     }



	return 0;
}
