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
ll n, m ,a , b;
ll dx[4] = {1,-1,0,0};
ll dy[4] = {0,0,1,-1};
char arr[550][550];
ll cost[550][550];
int main()
{
     cin >> m >> n >> a >> b;
     for (ll i=0;i<n;i++){
          for (ll j=0;j<m;j++){
               cin >> arr[i][j];
               cost[i][j] = -1;
          }
     }

     queue<pair<ll,ll> > q;
     q.push(mp(0,0));
     cost[0][0] = 0;
     arr[0][0] = '#';
     while (!q.empty()){
          pair<ll,ll> cur = q.front();q.pop();
          ll x = cur.fi , y = cur.se;
          for (ll i=0;i<4;i++){
               ll a = x+dx[i], b = y+dy[i];
               if (a >=0 && a < n && b >= 0 && b < m && arr[a][b] != '#'){
                    arr[a][b] = '#';
                    cost[a][b] = cost[x][y] +1;
                    q.push(mp(a,b));
               }
          }
     }
     if (cost[n-1][m-1] == -1){
          cout << "IMPOSSIBLE\n";
     }else{
          ll steps = cost[n-1][m-1];
          // cout << steps << endl;
          if (steps % 2 == 0){
               cout << (steps*a/2) + (steps*b/2) << endl;
          }else{
               cout << (((steps+1)*a)/2) + (ll) (steps*b/2 )<< endl;
          }
     }

	return 0;
}
