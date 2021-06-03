// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n, a, b;
vector<int> mn2;
vector<int> mn, mx, idx;
vector<int>::iterator up;
vector<pair<int,int> > mx2;
int main()
{
     // freopen("codecoder.in", "r", stdin);
     // freopen("codecoder.out", "w", stdout);
	cin >> n;
     for (int i=0;i<n;i++){
          cin >> a >> b;
          mn.pb(min(a,b));
          mn2.pb(min(a,b));
          mx.pb(max(a,b));
          mx2.pb(mp(max(a,b), i));
     }
     sort(mn.begin(),mn.end());

     for (int i=0;i<n;i++){
          up = upper_bound(mn.begin(),mn.end(), mn2[i]);
          idx.pb((up-mn.begin()));
          // cout << idx[i] /<< endl;
     }
     sort(mx2.begin(), mx2.end(), greater<pair<int,int> > ());
     vector<int> dp(n), ans(n);
     for (int i=0;i<n;i++){
          int cur = mx2[i].se;
          up = upper_bound(mn.begin(),mn.end(), mx[cur]-1);
          int found = up-mn.begin();
          if (found >= idx[cur]) found--;
          dp[i] = found;
          // if (i != 0){
          //      dp[i] = max(dp[i], dp[i-1]);
          // }
          // ans[cur] = dp[i];
          cout << cur << " " << found << " " << dp[i] << endl;
     }
     for (int i=n-2;i>=0;i--){
          dp[i] = max(dp[i], dp[i+1]);
     }
     for (int i=0;i<n;i++){
          int cur = mx2[i].se;
          ans[cur] = dp[i];
     }

     for (int i=0;i<n;i++){
          cout << ans[i] << endl;
     }



	return 0;
}
