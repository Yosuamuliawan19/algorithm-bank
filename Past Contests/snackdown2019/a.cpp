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
     int arr[100010], tc, n;
	cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++) cin >> arr[i];

          int tot = arr[0], days = 0;
          for (int i=1;i<n;){
               days++;
               // cout <<tot << endl;
               if (i + tot >= n) break;
               int cur = 0;
               for (int j=i;j<i+tot;j++){
                    cur += arr[j];
               }
               i = i + tot;
               tot += cur;
          }
          cout << days << endl;
     }

	return 0;
}
