#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n, k;

int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);

     cin >> tc;
     while (tc--){
          cin >> n >> k;
          if (k%2 == 0 && n%2 != 0 || k > n){
               cout << "NO\n";
               continue;
          }
          if (k%2 == 0){
               if (n%2 == 0){
                    cout << "YES\n";
                    for (int i=0;i<k-1;i++){
                         cout << 1 << " ";
                    }
                    cout << n-((k-1)) << "\n";
               }else{
                    cout << "NO\n";
               }
          }else{
               if (n%2 == 0){
                    // series of e
                    if (2*k > n){
                         cout << "NO\n";
                    }else{
                         cout << "YES\n";
                         for (int i=0;i<k-1;i++){
                              cout << 2 << " ";
                         }
                         cout << n-((k-1)*2) << "\n";
                    }
               }else{
                    // series of o
                    cout << "YES\n";
                    for (int i=0;i<k-1;i++){
                         cout << 1 << " ";
                    }
                    cout << n-((k-1)) << "\n";
               }
          }



     }


}
