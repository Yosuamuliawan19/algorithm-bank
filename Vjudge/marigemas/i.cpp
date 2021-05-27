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



int main(int argc, char const *argv[])
{
	int n,m,arr[20];
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     cin >> m;
     int mn = INT_MAX, mnval = arr[0];
     for (int i=0;i<n;i++){
          int cur = m % arr[i];
          if (cur < mn){
               mn = cur;
               mnval = arr[i];
          }
     }
     cout << mnval << endl;

	return 0;
}
