#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mn(int a, int b){
     if (a > b) return b;
     return a;
}
int mx(int a, int b){
     if (a < b) return b;
     return a;
}
ll tc, arr[60], n;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;
     while (tc--){
          cin >> n;
          ll e = 0, o = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
               if (arr[i] % 2 == 0) e ++;
               else o ++;
          }
          if (e % 2 == 0 && o % 2 == 0){
               cout <<"YES\n";
               continue;
          }

          sort(arr, arr +n);
          for (int i=0;i<n;i++){
               cout << arr[i] << " ";
          }
          cout << endl;


          cout << "NO\n";


     }
}
