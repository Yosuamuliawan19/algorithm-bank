// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdio>
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

int cal(int W, int H, int w, int h){
     if (w > W || h > H) return INT_MAX;
     int ret = 0;
     while (W > w) ret++, W = (W+1)/2;
     while (H > h) ret++, H = (H+1)/2;
     return ret;
}
int main()
{
     freopen("folding.in", "r", stdin);
     freopen("folding.out", "w", stdout);
     int W, H, w, h;
     cin >> W >> H >> w >> h;
     int ans = min(cal(W,H,w,h),cal(W,H,h,w));

     cout << (ans == INT_MAX ? -1 : ans)<< endl;
}
