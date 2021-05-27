#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b, t;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> t;
     while (t--){
          cin >> a >> b;
          if (b%a == 0){
               cout << a << " " << b << endl;
          }else cout << "-1\n";
     }
}
