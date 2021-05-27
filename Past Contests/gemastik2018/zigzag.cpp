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
int tc, n, arr[110], ans = 0;
void dp(int cur, bool up, int cnt){
     if (cnt == 3){
          ans ++;
          return;
     }
     for (int i=cur+1;i<n;i++){
          if (up && arr[cur] < arr[i]) dp(i, !up, cnt +1);
          if (!up && arr[cur] > arr[i]) dp(i, !up, cnt +1);
     }
}
int main()
{
     cin >> tc;
     while (tc--){
          cin >> n;
          ans = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          for (int i=0;i<n;i++){
               dp(i, 1, 1);
               dp(i, 0, 1);
          }
          cout << ans << endl;
     }

	return 0;
}
