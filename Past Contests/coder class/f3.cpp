#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>
#include <string.h>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

// vector<pair<int,int> > kul,man,sek;
vector<pair<int,int> > work;
map<int,pair<int,int> > ikatan;
int tc;
int n,p,k,m,s;
string j; int x;
int a,b,q;

int memo[110][20][20][20];
bool vis[110];


int dp(ll idx, ll val, ll ki, ll mi, ll si){
     if (k < ki || m < mi || s < si) return -1000000;
     if (idx == n) return -1000000;
     // cout << idx << " "<< val << " " << ki << " "<< mi << " "<<si << endl;

     if (k == ki && m == mi && s == si) return val;
     if (memo[idx][ki][mi][si] != 0) return memo[idx][ki][mi][si];
     int i=idx+1;
     int mx = dp(i,val,ki,mi,si);
          int curval = work[i].first;
          int curpos = work[i].second;
          if (curpos == 0) ki++;
          else if (curpos == 1) mi++;
          else if (curpos == 2) si++;
          if (ikatan.find(i) != ikatan.end() &&vis[i] == 0 && vis[ikatan[i].first] ==0){
               curval += ikatan[i].second;
               curval += work[ikatan[i].first].first;
               int tmp = curpos;
               curpos = work[ikatan[i].first].second;
               if (curpos == 0) ki++;
               else if (curpos == 1) mi++;
               else if (curpos == 2) si++;
               vis[i] =1;
               vis[ikatan[i].first] = 1;
               mx = max(mx, dp(i,val+curval,ki,mi,si));
               vis[i] =0;
               vis[ikatan[i].first] = 0;
               if (curpos == 0) ki--;
               else if (curpos == 1) mi--;
               else if (curpos == 2) si--;
               curpos = tmp;
          }else if (vis[i] == 0){
               vis[i] =1;
               mx = max(mx, dp(i,val+curval,ki,mi,si));
               vis[i] =0;
          }else{
               // cout << "already visit/ed\n";
          }
          if (curpos == 0) ki--;
          else if (curpos == 1) mi--;
          else if (curpos == 2) si--;


     memo[idx][ki][mi][si] = mx;
     return mx;
}
int main(int argc, char const *argv[])
{

     // scanf("%d",&tc);
     cin >> tc;
     while (tc--){
          // memset(memo,0, sizeof(memo));
          // scanf("%d %d %d %d %d",&n,&p,&k,&m,&s);
          FOR(a,0,110)FOR(b,0,20)FOR(c,0,20)FOR(d,0,20)memo[a][b][c][d] = 0;
          FOR(a,0,110)vis[a]=0;
          cin >> n >> p >> k >> m >> s;
          // cout << k << " " << m << " "<<s << " " << (k+m+s)<< endl;
          work.clear();
          ikatan.clear();
          int tot = 0;
          for (int i=0;i<n;i++){
               cin >> j;
               // scanf("%d",&x);
               cin >> x;
               if (j == "kuli"){
                    work.push_back(make_pair(x,0));
               }else if (j == "mandor"){
                    work.push_back(make_pair(x,1));
               }else{
                    work.push_back(make_pair(x,2));
               }
          }
          for (int i=0;i<p;i++){
               // scanf("%d %d %d",&a,&b,&q);
               cin >> a >> b >> q;
               // cout << a << b << q <<endl;
               ikatan[a-1] = make_pair(b-1,q);
               ikatan[b-1] = make_pair(a-1,q);
          }
          int what = k+m+s;
          if (what > n){
               cout << "tidak mungkin\n";
               continue;
          }
          int res = dp(0,0,0,0,0);
          if (res == -1000000 ){
               cout << "tidak mungkin\n";
          }else{
               cout << res << endl;
          }

     }
	return 0;
}
