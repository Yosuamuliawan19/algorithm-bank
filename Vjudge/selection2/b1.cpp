#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<limits>

typedef long long ll;
using namespace std;
ll bkit, m;
vector<pair<double, string> > items;
string s; double w; ll n;

double mn = INT_MIN;
vector<string> res;
void dp (double idx, double left, vector<string> cur){
     if (idx == m) return;
     if (left <= 0){
          if (left > mn){
               mn = left;
               res = cur;
          }
          return;
     }
     dp (idx + 1, left, cur);
     cur.push_back(items[idx].second);
     dp (idx + 1, left - items[idx].first, cur);
}
int main (){
     cin >> bkit >> m;
     for (ll i=0;i<m;i++){
          cin >> s >> w;
          items.push_back(make_pair(w,s));
     }
     sort(items.begin(), items.end());
     cin >> n;
     for (ll i=0;i<n;i++){
          cin >> w;
          w /= 2;
          w -= bkit;
          mn = INT_MIN;
          dp (0,w, vector<string>());
          if (mn == INT_MIN){
               cout << "-1\n";
          }else{
               cout << res.size();
               for (ll i=0;i<res.size();i++){
                    cout << " " << res[i];
               }
               cout <<  endl;
          }
     }



     return 0;
}
