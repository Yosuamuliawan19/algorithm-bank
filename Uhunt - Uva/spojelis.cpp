
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
int n, arr[20], mx = 1;
void dp(int idx, int cnt, int prev){
     if (idx == n){
          mx = max(mx, cnt);
          return;
     }
     dp(idx+1, cnt, prev);
     if (arr[idx] > prev){
          dp(idx+1, cnt+1, arr[idx]);
     }
}
int main()
{

     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     dp(0,0,0);
     cout << mx << endl;

	return 0;
}
