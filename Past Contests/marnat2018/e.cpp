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

int tc,n,a,b;
vector<pair<int,int> > coords;
double dist(double x1, double y1, double x2, double y2){
     double a = (x1-x2), b = (y1-y2);
     return (a*a + b*b);
}
int main(int argc, char const *argv[])
{

	cin >> tc;
     while (tc--){
          cin >> n;
          double x = 0, y = 0;
          for (int i=0;i<n;i++){
               cin >> a >> b;
               coords.pb(mp(a,b));
               x += a; y += b;
          }
          x/=n;y/=n;
          cout << x << " " << y << endl;
          double mx = 0;
          for (int i=0;i<n;i++){
               mx = max(mx, dist(x,y,coords[i].fi, coords[i].se));
          }
          cout << mx << endl;
     }

	return 0;
}
