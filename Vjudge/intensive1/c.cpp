// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
struct point{
     ll x, y, z;
}p[6000];
ll n;
double temp[3];
bool vis[6000] = {0};
bool oneLine(point a, point b, point c){
     ll x1 = a.x, y1 = a.y, z1 = a.z;
     ll x2 = b.x, y2 = b.y, z2 = b.z;
     ll x3 = c.x, y3 = c.y, z3 = c.z;
     return
     (((y2-y1)*(z3-z1) - (y3-y1)*(z2-z1) == 0) &&
     ((x3-x1)*(z2-z1) - (x2-x1)*(z3-z1) == 0) &&
     ((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1) == 0));
}
ll cnt = 0;
int main()
{
	cin >> n;
     for(int i=0;i<n;i++){
          cin >> p[i].x >> p[i].y >> p[i].z;
          vis[i] = 0;
     }
     vis[0] = 1;
     for(int i=1;i<n;i++){
          if (!vis[i]){
               cnt ++;
               vis[i] = 1;
               for (int j=1;j<n;j++){
                    if (i != j && oneLine(p[i], p[j], p[0])){
                         vis[j] = 1;
                    }
               }
          }
     }
     cout << cnt << endl;

	return 0;
}
