#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tc, arr[100][100], n, m;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
               }
          }
          ll ans = 0;
          for (int i=0;i<(n+1)/2;i++){
               ll op = n-1-i;
               for (int j=0;j<(m+1)/2;j++){
                    vector<ll> v;
                    ll op2 = m-1-j;
                    v.push_back(arr[i][j]);
                    if (i != op){
                         v.push_back(arr[op][j]);
                    }
                    if (j != op2){
                         v.push_back(arr[i][op2]);
                    }
                    if (i != op && j != op2){
                         v.push_back(arr[op][op2]);
                    }
                    sort(v.begin(),v.end());
                    for (int i=0;i<v.size();i++){
                         ans += abs(v[i] - v[v.size()/2]);
                    }
               }
          }
          cout << ans << "\n";
     }



     return 0;
}
