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
int tc, arr[100010], n, k;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n >> k;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr, arr+n, greater<int>());
          int val = arr[k-1];
          while (arr[k] == val) k++;
          cout << k << endl;
     }
	return 0;
}
