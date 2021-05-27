#include<iostream>
#include<vector>
#include<string>
#include<sstream>
typedef long long ll;
using namespace std;
ll n, m;
string inp;
vector<ll> st;
int main (){
     cin >> n;
     st = vector<ll>(n*2, 0);
     for (ll i=0;i<n;i++){
          cin >> st[n+i];
     }
     cin >> m;
     for (ll i=0;i<m;i++){
          getline(cin, inp);
          stringstream ssr(inp);
          ll cnt = 0;
          ll arr[4];
          while (ssr >> arr[cnt]){
               cnt++;
          }
          if (cnt == 3){
               cout << "change\n";
          }else{
               cout << "query\n";
          }
     }


     return 0;
}
