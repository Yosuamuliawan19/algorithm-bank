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
     int n, t, tot = 0, arr[100010];
     cin >> n >> t;
     for (int i=0;i<n;i++){
          cin >> arr[i];
          tot += arr[i];
     }
     int rtot = 0;
     for (int i=n-1;i>=0;i--){
          rtot += arr[i];
          arr[i] = tot - rtot;
     }
     for (int i=0;i<n;i++){
          cout << arr[i] << endl;
     }

	return 0;
}
