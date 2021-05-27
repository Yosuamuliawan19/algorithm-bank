#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;

char arr[1010][1010];

int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     ll l=0, r=n-1;
     ll ans = 0;
     set<string> st;
     while(r >= l){
          ll mid = l +(r-l)/2;
          ll f = 0;
          st.clear();
          for (int i=0;i<m;i++){
               string cur = "";
               for (int j=mid;j<n;j++){
                    cur += arr[j][i];
               }
               // cout << cur << endl;
               if (st.count(cur) != 0){
                    // cout << "dupe" << endl;
                    f=1; break;
               }
               st.insert(cur);
          }
          if (f){
               r = mid-1;
          }else{
               if (mid > ans) ans = mid;
               l = mid+1;
          }
          // cout << mid << endl;
     }
     cout << ans << endl;



     return 0;
}
