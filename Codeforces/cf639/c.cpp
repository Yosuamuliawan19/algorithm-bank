#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     ll tc, n, tmp;
     cin >> tc;
     while (tc--){
          set<ll> st;
          cin >> n;
          for (int i=1;i<=n;i++){
               cin >> tmp;
               // cout << (tmp+i) % n  << endl;
               tmp = (tmp+i)%n;
               if (tmp <= 0){
                    tmp = tmp + n;
               }
               st.insert(tmp);
          }
          if (st.size() == n){
               cout << "YES\n";
          }else{
               cout << "NO\n";
          }
     }
}
