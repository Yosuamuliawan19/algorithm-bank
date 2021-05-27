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
int arr[100010], tc, n;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          int idx = 1;
          int tot = arr[0];
          while (idx < n){
               int cur = 0;
               for (int i=idx;i<idx+tot;i++){
                    cur += arr[i];
               }
               idx = idx + tot;
               tot += cur;
               cout << tot << endl;
          }
     }

	return 0;
}
