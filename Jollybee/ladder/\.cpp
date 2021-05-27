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
     int n, m,a,b ;
     set<pair<int,int> > st;
     cin >> n >> m;
     for (int i=0;i<m;i++){
          cin >> a >> b;
          st.insert(mp(a,b));
          st.insert(mp(b,a));
     }
     bool vis[1010];
     memset(vis, 0, sizeof(vis));
     int cur = 1;
     vis[1] =1;
     int cnt = 1;
     cout << n-1 << endl;
     while (cnt != n){
          for (int i=1;i<=n;i++){
               if (!vis[i] && st.find(mp(cur,i)) == st.end()){
                    vis[i] = 1;
                    cout << cur << " " << i << endl;
                    cur = i;
                    cnt ++;
               }
          }
     }

	return 0;
}
