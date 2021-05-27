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
struct point{
     ll x,y;
};
vector<point> p;
ll n,a,b;
double polygonArea()
{
    double area = 0.0;
    ll j = n - 1;
    for (ll i = 0; i < n; i++)
    {
        area += (p[j].x + p[i].x) * (p[j].y - p[i].y);
        j = i;
    }
    return abs(area / 2.0);
}
ll disPoint = 0;
ll gcd(ll a,ll b){
     if (a == 0) return b;
     else if (b == 0) return a;
     if (a == b) return a;
     if (a > b){
          return gcd(a-b,b);
     }else{
          return gcd(a,b-a);
     }
}
void genOuter(){
     ll j = n - 1;
     for (ll i = 0; i < n; i++)
     {
          ll a = abs(p[i].x - p[j].x) , b = abs(p[i].y - p[j].y);
         disPoint += (gcd(a,b)+1);
         // cout << disPoint << endl;
         j = i;
     }
     disPoint-=n;
}
point po;
int main(int argc, char const *argv[])
{
	cin >> n;
     for (ll i=0;i<n;i++){
          cin >> a >> b;
          po.x = a; po.y = b;
          p.pb(po);
     }
     genOuter();
     double area = polygonArea();
     area = area - ((double)disPoint/2.0) + 1;
     area = (ll) area;
     cout << area <<endl;
     cout << "distpoint  " << disPoint << endl;

	return 0;
}
