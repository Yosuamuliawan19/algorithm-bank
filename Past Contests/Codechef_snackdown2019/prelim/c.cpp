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
     int tc, n, m, x, y;
     cin >> tc;
     while (tc--){
          cin >> n >> m >> x >> y;
          x--;y--;
          int ans = 0, bl = (n*m) - 1 - (n-1) - (m-1);
          cout << "blank " << bl << endl;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    // i, j
                    if (i == x && j == y) continue;
                    int blank = bl - min(abs(n-i-1), abs(m-j-1))
                     - min(i, abs(m-j-1))
                      - min(abs(n-i-1), j)
                       - min(i, j);
                    cout << "(" << i << "," << j << ") "<< blank << " - " ;
                    int prev = ans;
                    if (i == x){
                         ans += blank;
                         if (j < y){
                              ans += y;
                         }else{
                              ans += (m-y-1);
                         }
                    }else if (j == y){
                         ans += blank;
                         if (i > x){
                              ans += x;
                         }else{
                              ans += (n-x-1);
                         }
                    }else if (abs(x-i) == abs(y-j)){
                         ans += blank;
                         if (x > i && y > j){
                              ans += min(abs(n-x-1), abs(m-y-1));
                         }else if (x > i && y < j){
                              ans += min(abs(n-x-1), y);
                         }else if (x < i && y < j){
                              ans += min(x, y);
                         }else{
                              ans += min(x, abs(m-y-1));
                         }
                    }else{
                         ans += blank-1;
                    }
                    cout << ans - prev << endl;
               }
          }
          cout << ans << endl;
     }


	return 0;
}
