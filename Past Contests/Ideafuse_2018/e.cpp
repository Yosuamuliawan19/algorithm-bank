#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
#include<math.h>
#include<iomanip>
typedef long long ll;
typedef long double ld;
using namespace std;

void dfs(int x, int d){
     
}
int main (){
     ll n, m, x, y, d;
     cin >> n >> m;
     vector<vector<ll> > adjList(n, vector<ll>());
     for (int i=0;i<n;i++){
          cin >> x >> y;
          adjList[x-1].push_back(y-1);
          adjList[y-1].push_back(x-1);
     }

     for (int i=0;i<m;i++){
          cin >> x >> d;
     }

     return 0;
}
