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
double n,coor[70000], speed[70000];
double l = 0, r = 0;


double test(double x){
     double mx = 0;
     for (int i=0;i<n;i++){
          double dist = abs(coor[i]-x);
          dist /= speed[i];
          mx = max(dist, mx);
     }
     return mx;
}
int main()
{
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> coor[i];
          r = max(r, coor[i]);
     }
     for (int i=0;i<n;i++){
          cin >> speed[i];
     }
     // for (int i=0;i<r;i++){
     //      cout << test(i) << " ";
     // }
     // cout << endl;
     int iter = 0;
     double mid1,mid2,t1,t2;
     while (r >= l){
          iter ++; if (iter == 100) break;
          mid1 = l + (r-l)/3.0;
          mid2 = r - (r-l)/3.0;
          t1 = test(mid1);
          t2 = test(mid2);
          // cout << l <<" "<<mid1 <<" " << mid2 << " "  << r<< endl;
          // cout << t1 << " " << t2 << " "<< mid1 << " "<< mid2 << endl;
          if (t1 > t2){
               l = mid1;
          }else{
               r = mid2;
          }
     }
     cout << fixed << setprecision(6) <<  t1 << endl;




	return 0;
}
