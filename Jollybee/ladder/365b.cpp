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

int main()
{
     int n,arr[100010];
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     int mx = 0, cnt = 0;
     for (int i=2;i<n;i++){
          // cout << arr[i] << " " << arr[i-1] << " " << arr[i-2] << endl;
          if (arr[i] == arr[i-1]+arr[i-2]){
               cnt ++;
               mx = max(mx, cnt);
          }else{
               cnt = 0;
          }
     }
     cout << mx+min(n,2) << endl;

	return 0;
}
