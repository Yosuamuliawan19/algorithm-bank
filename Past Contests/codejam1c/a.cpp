#include<iostream>
#include<map>
#include<vector>
typedef long long ll;
using namespace std;

ll tc, n, l;
string temp;
vector<string> vec;
map<string,ll> m;
string res = "-";

void dfs(ll x, ll y, string s){
     if (res != "-") return;
     s += (char) vec[x][y];
     if (y == l-1){
          // cout << s << endl;
          if (m.find(s) == m.end()){
               res = s;
          }
          return;
     }
     for (ll i=0;i<n;i++){
          dfs(i,y+1,s);
     }
}

int main(){

     scanf("%lld", &tc);
     for (ll t=1;t<=tc;t++){
          res = "-";
          vec.clear();
          m.clear();
          scanf("%lld %lld", &n, &l);

          for (ll i=0;i<n;i++){
               cin >> temp;
               vec.push_back(temp);
               m[temp] = 1;
          }
          for (ll i=0;i<n;i++){
               // cout << i << endl;
               dfs(i,0,"");
               if (res != "-") break;
          }
          cout << "Case #" << t << ": " << res << endl;


     }



     return 0;
}
