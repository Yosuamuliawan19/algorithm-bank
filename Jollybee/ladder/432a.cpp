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
     int n, k, arr[2010];
     cin >> n >> k;
     for (int i=0;i<n;i++){
          cin >> arr[i];
          arr[i] = 5 - arr[i];

     }
     sort(arr, arr + n, greater<int>());
     // for (int i=0;i<n;i++){
     //      cout << arr[i] << " ";
     // }cout << endl;
     int cnt = 0;
     int idx = 2;
     while(arr[idx] >= k && idx < n){
          idx += 3;
          cnt ++;
     }
     cout << cnt << endl;
	return 0;
}
