#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1010], arr2[1010];
bool cmp(pair<int,int> a, pair<int,int> b){
     if (a.second > b.second){
          return 1;
     }else if (a.second == b.second && a.first > b.first){
          return 1;
     }else return 0;
}
int main(){
     ll n,a,b;
     ll c = 0;
     vector<pair<int,int> > v;
     while (cin >> n){
          c++;
          if (!n) break;
          v.clear();
          for (int i=0;i<n;i++){
               cin >> a >> b ;
               v.push_back(make_pair(a,b));
          }
          sort(v.begin(), v.end(), cmp);
          ll x = 0, ans = 0 ;

          for (int i=0;i<n;i++){
               x += v[i].first;
               ans = max(x + v[i].second, ans);
          }
          cout << "Case " << c << ": " << ans << "\n";
     }

     return 0;
}
