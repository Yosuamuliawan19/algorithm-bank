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
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n;
struct date{
     int y, m, d, i;
}king, son[110];
bool comp(date a, date b){
     if (a.y == b.y){
          if (a.m == b.m){
               return a.d > b.d;
          }else return a.m > b.m;
     }else return a.y > b.y;
}
int main()
{
     freopen("king.in", "r", stdin);
     freopen("king.out", "w", stdout);
     cin >> king.d >> king.m >> king.y;
     king.y -= 18;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> son[i].d >> son[i].m >> son[i].y;
          son[i].i = i;
     }
     sort(son, son+n, comp);
     for (int i=0;i<n;i++){
          if (comp(son[i], king)) continue;
          cout << son[i].i+1 << endl;
          return 0;
     }
     cout << "-1\n";

	return 0;
}
