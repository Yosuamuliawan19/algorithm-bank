#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<iomanip>
#include<string>
#include<climits>
#include<cmath>
#include<queue>
#include<string.h>

#define MP(a,b) make_pair(a,b)
#define FI first
#define SE second
#define PB(a,b) push_back(a,b);

typedef long long ll;
using namespace std;
ll grid[2001][2001] = {0};
ll col[2001] = {0};
ll row[2001] = {0};
ll n, m;
double dist(ll a, ll b){
     ll x = ceil(n/2)-1, y = ceil(m/2)-1;
     return abs(x-a) + abs(y-b);
}
int main (){

     scanf("%lld %lld", &n, &m);
     ll tot = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               scanf("%lld", &grid[i][j]);
               row[i] += grid[i][j];
               col[j] += grid[i][j];
               tot += grid[i][j];
          }
     }
     // for (int i=0;i<n;i++){
     //      cout << row[i] << " ";
     // }
     // cout << endl;
     // for (int i=0;i<m;i++){
     //      cout << col[i] << " ";
     // }
     // cout << endl;
     ll mn = LLONG_MAX;
     ll mindist = dist(1,1);
     ll r=1,c=1;
     for (int i=1;i<n-1;i++){
          for (int j=1;j<m-1;j++){
               ll sum = 0;
               sum += row[i];
               sum += col[j];
               sum -= grid[i][j];

               bool change = false;
               if (sum < mn){
                    change = 1;
               }else if (sum == mn){
                    if (mindist > dist(i,j)){
                         change = 1;
                    }else if(mindist == dist(i,j)){
                         if (r > i){
                              change = 1;
                         }else if (r == i){
                              if (c > j){
                                   change = 1;
                              }
                         }
                    }
               }
               if (change){
                    mn = sum;
                    r = i; c = j;
                    mindist = dist(i,j);
               }
          }
     }
     // cout << tot - mn << endl;
     // cout << r+1 << " " << c+1 << "\n";
     printf("%lld\n", tot - mn);
     printf("%lld %lld\n", r+1, c+1);
     // cout << dist(1,1) << " " << dist(3,1);
}
