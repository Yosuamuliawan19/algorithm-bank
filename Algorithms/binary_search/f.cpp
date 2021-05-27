#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, arr[10010], m;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     while (cin >> n){
          for (int i=0;i<n;i++) cin >> arr[i];
          cin >> m;
          sort(arr, arr + n);

          ll x=0,y=0,z=LLONG_MAX;

          for (int i=0;i<n;i++){
               if (arr[i] >= m) break;
               ll f = m-arr[i];

               ll l=i+1, r=n-1;
               while (r>=l){
                    ll mid = l + (r-l)/2;
                    // cout << l << " "<< mid << " " << r << endl;
                    if (arr[mid] == f){
                         // cout << f << " " << arr[i] << endl;
                         if (f-arr[i] < z){
                              x = f;y=arr[i];z=f-arr[i];
                         }
                         break;
                    }else if (arr[mid] > f){
                         r =mid-1;
                    }else{
                         l =mid+1;
                    }
               }
          }
          cout << "Peter should buy books whose prices are "<< y << " and " << x << ".\n\n";
     }
}
