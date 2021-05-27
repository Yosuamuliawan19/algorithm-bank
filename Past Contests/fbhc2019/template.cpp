#include<stdio.h>
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
// #include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<long long, long long> pll;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOR(a,b) for(int i=a;i<b;i++)

int main (){
     int tc, n;
     ii arr[2010];
     scanf("%d", &tc);
     for (int t=0;t<tc;t++){
          int ans = 0, x, y;
          scanf("%d", &n);
          for (int i=0;i<n;i++){
               scanf("%d %d", &x, &y);
               arr[i] = mp(x,y);
          }

          for (int i=0;i<n;i++){
               vector<int> dist;
               for (int j=0;j<n;j++){
                    if (i == j) continue;
                    dist.pb(
                         (arr[i].fi-arr[j].fi) * (arr[i].fi-arr[j].fi) +
                         (arr[i].se-arr[j].se) * (arr[i].se-arr[j].se)
                    );
                    // printf("%d\n", dist[dist.size()-1]);
               }
               sort(dist.begin(), dist.end());
               // for (int i=0;i<dist.size();i++){
               //      cout << dist[i] << " ";
               // }
               // cout << endl;
               int temp = 1;
               for (int i=1;i<n-1;i++){
                    if (dist[i] != dist[i-1]){
                         ans += (temp*(temp-1)/2);
                         temp = 1;
                    }else{
                         temp ++;
                    }
                    if (i == n-2){
                         ans += (temp*(temp-1)/2);
                    }
               }
               // cout << "ans " << ans<<endl;
          }

          printf("Case #%d: %d\n", t+1, ans);
     }
}
