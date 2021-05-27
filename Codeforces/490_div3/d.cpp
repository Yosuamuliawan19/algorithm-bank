#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>

typedef long long ll;
using namespace std;
ll n,m,arr[100000];

int main (){
     cin >> n >> m;
     vector<vector<int> > lst(m);

     for (ll i=0;i<n;i++){
          cin >> arr[i];
          lst[arr[i]%m].push_back(i);
     }
     ll k = n/m;
     vector<pair<int,int> > del;
     ll ans =0;
     for (ll i=0;i<m*2;i++){
          ll j =i%m;
          while (lst[j].size() > k){
               ll cur = lst[j].back();
               lst[j].pop_back();
               del.push_back(make_pair(cur,j));
          }
          while (lst[j].size() < k && !del.empty()){
               pair<int,int> cur = del.back();
               del.pop_back();
               lst[j].push_back(cur.first);
               arr[cur.first] += i - cur.second;
               ans += i - cur.second;
          }
     }

     cout << ans << endl;
     for (ll i=0;i<n;i++){
          cout << arr[i] << " ";
     }
     cout <<"\n";

     return 0;
}
