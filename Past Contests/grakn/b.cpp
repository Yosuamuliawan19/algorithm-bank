#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair

ll tc, n , k, a[110], cur;
set<int> st;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n >> k;
          st.clear();
          for (int i=0;i<n;i++){
               cin >> cur;
               st.insert(cur);
          }
          // cout <<  st.size() << " " << k << endl;
          if (k == 1 && st.size() != 1){
               cout << "-1\n";
               continue;
          }

          double ans = 1.0 ;
          if (k != 1) ans += ceil((double)(st.size()-k) / (double)(k-1));
          // cout << " --- " << st.size()-k << " " << k-1 << endl;
          cout << ans << "\n";
     }

     return 0;
}
