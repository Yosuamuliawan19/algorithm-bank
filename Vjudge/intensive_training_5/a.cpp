// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
// #include<cmath>
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
int w,h,x1,x2,y1,y2;
int main()
{
     freopen("anniversary.in", "r", stdin);
     freopen("anniversary.out", "w", stdout);
	scanf("%d%d%d%d%d%d",&w,&h,&x1,&y1,&x2,&y2);
     if (x1 != x2){
          printf("%d %d %d %d\n", x1, 0, x2, h);
     }else{
          printf("%d %d %d %d\n", 0, y1, w, y2);
     }


	return 0;
}
