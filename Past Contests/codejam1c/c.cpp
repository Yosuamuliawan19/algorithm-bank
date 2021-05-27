#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

typedef long long ll;
using namespace std;

vector<pair<ll,ll> > ants;
vector<pair<ll,ll> > sant;

ll tc, n, temp;

int main(){
     scanf("%lld", &tc);
     for (int t=1;t<=tc;t++){
          ants.clear();
          sant.clear();

          scanf("%lld", &n);
          for (int i=0;i<n;i++){
               scanf("%lld", &temp);
               ants.push_back(make_pair(temp, i));
          }
          sant = ants;
          sort(sant.begin(), sant.end(), greater<pair<ll,ll> >());
          int max = -1;
          for (int i=0;i<n;i++){
               int cnt = 1;
               // cout << sant[i].first << endl;
               pair<ll,ll> cur = sant[i];
               ll w = cur.first * 6, idx = cur.second;
               ll curw = 0;
               for (int j=idx-1;j>=0;j--){
                    if (curw + ants[j].first <= w){
                         cnt ++ ;
                         // cout << "cnt = " << cnt << endl;
                         curw += ants[j].first;
                    }else{
                         break;
                    }
               }
               if (cnt > max){
                    max = cnt;
               }
          }
          cout << "Case #"<< t << ": " << max << endl;
          // for (int i=n-1;i>=0;i++){
          //
          // }
     }
     return 0;
}
