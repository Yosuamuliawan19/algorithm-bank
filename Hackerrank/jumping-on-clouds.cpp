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
     ll n, arr[110];
     cin >> n;
     for (int i=0;i<n;i++) cin >> arr[i];

     int idx = 0;
     int cnt = 0;
     while (idx != n-1){
          if (arr[idx+2] == 0) idx = idx+2;
          else if (arr[idx+1] == 0) idx++;
          cnt ++;
     }
     cout << cnt << endl;

	return 0;
}
