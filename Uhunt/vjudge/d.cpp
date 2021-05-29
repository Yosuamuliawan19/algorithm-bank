#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
vector<vector<int> > arr;
ll vis[110] = {0}, a, b, n, m;
stack<ll> st;
void topo(ll cur){
     vis[cur] = 1;
     for (int i=0;i<arr[cur].size();i++){
          if (vis[arr[cur][i]] == 0){
               topo(arr[cur][i]);
          }
     }
     st.push(cur);
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);

     ll n, m;
     while (cin >> n >> m){
          if (!n && !m) break;
          arr = vector<vector<int> > (n+1, vector<int>());
          memset(vis, 0, sizeof(vis));
          for (int i=0;i<m;i++){
               cin >> a >> b;
               arr[a-1].pb(b-1);
          }
          memset(vis, 0, sizeof(vis));
          for (int i=0;i<n;i++){
               if (!vis[i]) topo(i);
          }
          while (!st.empty()){
               cout << st.top()+1 ;
               st.pop();
               if (!st.empty()) cout << " ";
          }cout << "\n";
     }



     return 0;
}
