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
#include<climits>
#include<set>
#include<queue>
#include<string>
#include<sstream>

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

int n,a,b;
string s;
vector<pair<int,int> > locs;
double dist[10][10] = {0};
double memo[10][3000] = {0};
int limit;
int dtob(long long n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
double tsp(int state, int mask){
     if (mask == limit) return dist[state][0];
     if (memo[state][mask] != -1) return memo[state][mask];
     double ans = numeric_limits<double>::max();
     for (int city = 0;city<n;city++){
          if ((mask&(1<<city)) == 0){
               ans = min(ans, dist[state][city] + tsp(city, (mask|(1<<city))));
          }
     }
     return memo[state][mask] = ans;
}
int main(int argc, char const *argv[])
{
	while (cin >> n){
          if (!n) break;
          for (int i=0;i<n;i++){
               cin >> a >> b;
               locs.pb(mp(a,b));
          }
          for (int i=0;i<10;i++) for (int j=0;j<3000;j++) memo[i][j] = -1;
          memset(dist,0,sizeof(dist));
          for (int i=0;i<n;i++){
               for (int j=i+1;j<n;j++){
                    pair<int,int> x = locs[i], y = locs[j];
                    dist[i][j] = dist[j][i] = 16 +
                    sqrt((abs(x.fi-y.fi)*(double)abs(x.fi-y.fi)) + (abs(x.se-y.se)*(double)abs(x.se-y.se)));
               }
          }
          limit = (1<<n)-1;
          cout << dtob(limit) << endl;
          cout << tsp(0,1) << endl;
     }
	return 0;
}
