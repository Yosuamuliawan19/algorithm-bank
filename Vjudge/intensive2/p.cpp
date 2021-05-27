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
ll n, k, r, tmp, arr[100010], up[100010];
int main()
{
     cin >> n >> k >> r;
     for (ll i=0;i<k;i++){
          cin >> tmp;
          arr[tmp] = 1;
     }
     for (ll i=1;i<n;i++){
          arr[i] += arr[i-1];
          cout << arr[i] << " ";
     }
     cout << endl;
     int cnt = 0;
     for (ll i=0;i<n-r;i++){
          ll d = arr[i+r] - arr[i];
          if (d < 2){
               up[i+r] = 1;
               cnt ++;
          }
          cout << d << " ";
     }
     cout << cnt << endl;




	return 0;
}
