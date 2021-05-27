#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, q, arr[100010];

int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> n >> q;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     while (q--){
          ll l=0, r=n-1;
          ll f=-1, cur;
          cin >> cur;
          while (r >= l){
               ll m = l + (r-l)/2;
               // cout << l << " " << m << " " << r << endl;
               if (arr[m] == cur){
                    f=m;
                    // break;
                    r = m-1;
               }else if (arr[m] > cur){
                    r = m-1;
               }else {
                    l = m+1;
               }
          }
          cout << f << "\n";
     }


     return 0;
}
