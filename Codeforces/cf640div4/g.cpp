#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n;

int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;
     while (tc--){
          cin >> n;
          if (n < 4){
               cout << "-1\n";
          }else{
               for (int i=1;i<n;i+=2){
                    cout << i << " ";
               }
               cout << 4 << " " << 2;
               for (int i=6;i<n;i+=2){
                    if (i!=6) cout << " ";
                    cout << i;
               }
               cout << endl;
          }
     }

}
