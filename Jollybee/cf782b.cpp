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

     double prev = INT_MAX;
     while (r > l){
          double m = (r+l)/2;
          double tim = test(m);
          cout << tim << endl;
          if (tim > prev){
               r = m;
          }else{
               l = m;
          }
          prev = tim;
     }


	return 0;
}
