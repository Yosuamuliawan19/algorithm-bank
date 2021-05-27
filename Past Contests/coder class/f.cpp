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


int dp(ll idx, ll val, ll ki, ll mi, ll si){
     // cout << idx << " "<< val << " " << ki << " "<< mi << " "<<si << endl;
     if (memo[idx][ki][mi][si] != 0){
          return memo[idx][ki][mi][si];
     }
     if (idx == n-1) return -1;
     if (k == ki && m == mi && s == si){
          return val;
     }
     int mx = -1;
     for (int i=idx+1;i<n;i++){
          int curval = work[i].first;
          int curpos = work[i].second;
          if (curpos == 0) ki++;
          else if (curpos == 1) mi++;
          else if (curpos == 2) si++;
          if (ikatan.find(i) != ikatan.end()){
               curval += ikatan[i].second;
               curval += work[ikatan[i].first].first;
               int tmp = curpos;
               curpos = work[ikatan[i].first].second;
               if (curpos == 0) ki++;
               else if (curpos == 1) mi++;
               else if (curpos == 2) si++;
               mx = max(mx, dp(i,val+curval,ki,mi,si));
               if (curpos == 0) ki--;
               else if (curpos == 1) mi--;
               else if (curpos == 2) si--;
               curpos = tmp;
          }else{
               mx = max(mx, dp(i,val+curval,ki,mi,si));
          }
          if (curpos == 0) ki--;
          else if (curpos == 1) mi--;
          else if (curpos == 2) si--;
     }
     memo[idx][ki][mi][si] = mx;
     return mx;
}
int main(int argc, char const *argv[])
{

     // scanf("%d",&tc);
     cin >> tc;
     while (tc--){
          memset(memo,0, sizeof(memo));
          // scanf("%d %d %d %d %d",&n,&p,&k,&m,&s);
          // FOR(a,0,101)FOR(b,0,15)FOR(c,0,15)FOR(d,0,15)memo[a][b][c][d] = 0;
          cin >> n >> p >> k >> m >> s;
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
          int res = dp(0,0,0,0,0);
          if (res == -1){
               cout << "tidak mungkin\n";
          }else{
               cout << res << endl;
          }

     }
	return 0;
}
