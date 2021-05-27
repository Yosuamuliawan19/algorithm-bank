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
     int tc;
     cin >> tc;
     while (tc--){
          int n, mypos, myfuel, cnt = 0;
          cin >> n;
          vector<pair<int,int> > pos(n, pair<int,int>());
          for (int i=0;i<n;i++){
               cin >> pos[i].fi >> pos[i].se;
          }
          sort(pos.begin(), pos.end(), greater<pair<int,int> > ());
          cin >> mypos >> myfuel;
          priority_queue<int> q;
          int idx = 0;
          while (mypos > myfuel){
               while (pos[idx].fi >= mypos-myfuel){
                    q.push(pos[idx].se);
                    idx++;
               }
               if (q.empty()) break;
               cnt ++;
               myfuel += q.top();
               // cout << myfuel << endl;
               q.pop();
          }
          if (mypos > myfuel ) cout << -1<<endl;
          else cout << cnt << endl;
     }

	return 0;
}
