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
ll grid[2001][2001];
int main (){
     ll n, m;
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> grid[i][j];
          }
     }
     ll mn = LLONG_MAX;
     for (int i=1;i<n-1;i++){
          for (int j=1;j<m-1;j++){
               ll sum = 0;
               for (int k=0;k<n;k++){
                    sum += grid[k][j];
               }
               for (int k=0;k<m;k++){
                    sum += grid[i][k];
               }
               sum -= grid[i][j];
               cout << sum << endl;
               if (sum < mn){
                    mn = sum;
               }
          }
     }
     cout << mn << endl;
}
