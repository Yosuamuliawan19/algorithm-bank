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
ll n, m;
ll sz[100010], arr[100010];
int main()
{
     cin >> n >> m;
     ll dv = ceil((double)n/m);
     ll remain = n;
     bool f = 1;
     for (int i=0;i<m;i++){
          sz[i] = dv;
          remain -= dv;
          // cout << sz[i] << endl;
          if (remain == 0) dv = 0;
          if (f && ((double)remain / (double)(dv-1) == (m-i-1))){
               dv--;
               f = 0;
          }
     }


     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     sort(arr, arr+n);
     ll mn = 0, mx = 0;
     for (int i=0;i<m;i++) mn += arr[i];
     ll idx = n;
     for (int i=m-1;i>=0;i--){
          idx -= sz[i];
          mx += arr[idx];
     }
     cout << mn << " " << mx << endl;
	return 0;
}
