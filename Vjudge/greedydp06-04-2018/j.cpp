#include<iostream>
// #include<stdio.h>
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
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

int n, m, arr[300005];

int main(int argc, char const *argv[])
{
     scanf("%d%d",&n,&m);
     for (int i=0;i<n;i++) scanf("%d",&arr[i]);
     int idx = 0, mx = 0, sum = 0;
     for (int i=0;i<n;i++){
          sum += arr[i];
          while (sum > m) sum -= arr[idx++];
          mx = max(sum ,mx);
     }
     cout << mx <<endl;


	return 0;
}
