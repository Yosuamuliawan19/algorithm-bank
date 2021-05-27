#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tc, n, a, b;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
     if (a.first < b.first){
          return 1;
     } else if (a.first == b.first && a.second < b.second){
          return 1;
     }else return 0;
}
struct cmp2 {
    bool operator()(pair<ll,ll> a, pair<ll,ll> b){
         if (a.second < b.second){
              return 1;
         } else if (a.second == b.second && a.first < b.first){
              return 1;
         }else return 0;
    }

};

priority_queue<pair<ll,ll>, vector<pair<ll,ll> > ,cmp2 > pq;
vector<pair<ll,ll> > v;
vector<pair<ll,ll> > arr;



int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n;
          pq = priority_queue<pair<ll,ll>, vector<pair<ll,ll> > ,cmp2 > ();
          v.clear();
          arr.clear();
          while (cin >> a >> b ){
               if (a == 0 && b == 0) break;
               if (b <= 0) continue;
               arr.push_back(make_pair(a, b));
          }
          sort(arr.begin(), arr.end(), cmp);
          // for (auto a: arr){
          //      cout << a.first << "+" << a.second <<endl;
          // }
          // cout << "----\n";

          ll l = 0, idx = 0;
          while (1){
               if (l >= n) break;
               // cout << arr[idx].first << " " << arr[idx].second << " " << idx << endl;
               while (idx != arr.size() && arr[idx].first <= l){
                    pair<ll,ll> a = arr[idx];
                    // cout <<  a.first << "-" <<  a.second <<endl;
                    pq.push(arr[idx++]);
               }
               if (!pq.empty()){
                    pair<ll,ll> a = pq.top();
                    pq.pop();
                    // cout << a.first <<" " << a.second << "\n";

                    if (a.second > l){
                         l = a.second;
                         v.push_back(a);
                    }
               }else{
                    break;
               }
          }
          if (l < n){
               cout << 0 << "\n";
          }else{
               cout << v.size() << endl;
               for (ll i=0;i<v.size();i++){
                    cout << v[i].first <<" " << v[i].second << "\n";
               }
          }

          if (tc != 0){
               cout << "\n";
          }
     }



     return 0;
}
