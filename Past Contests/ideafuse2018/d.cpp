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

int main (){
     string temp;
     vector<pair<ll,ll> > wins(8);
     vector<string> names;
     map<string,ll> m;
     for (int i=0;i<8;i++){
          cin >> temp;
          m[temp] = i;
          names.push_back(temp);
          wins[i] = make_pair(0,i);
     }
     ll s1, s2;
     string t1, t2;
     for (int i=0;i<28;i++){
          cin >> t1 >> s1 >> temp >> s2 >> t2;
          if (s1 > s2){
               wins[m[t1]].first ++;
          }else{
               wins[m[t2]].first ++;
          }
     }
     vector<vector< string > > res(28,vector<string>());
     for (int i=0;i<8;i++){
          res[wins[i].first].push_back(names[wins[i].second]);
     }
     for (int i=27;i>=0;i--){
          ll s = res[i].size();
          if (s != 0){
               sort(res[i].begin(), res[i].end());
               for (int j=0;j<s;j++){
                    cout << res[i][j] << " " << i << endl;
               }
          }
     }

     return 0;
}
