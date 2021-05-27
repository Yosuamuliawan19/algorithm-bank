#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n;

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n;
          string num;
          cin >> num;
          ll oa = 0, ea = 0, ob = 0, eb = 0;
          for (int i=0;i<n;i++){
               ll cur = num[i] -  '0';
               if (i % 2 == 0){
                    //a
                    if (cur % 2 == 0){
                         ea++;
                    }else{
                         oa++;
                    }
               }else{
                    // b
                    if (cur % 2 == 0){
                         eb++;
                    }else{
                         ob++;
                    }
               }
          }
          if (n % 2 != 0){
               if (oa >= 1){
                    cout << "1\n";
               }else{
                    cout << "2\n";
               }
               // (n / 2) - 1
          }else{
               if (eb >= 1){
                    cout << "2\n";
               }else{
                    cout << "1\n";
               }
          }
          // cout << oa << " " << ea << "-" << ob << " " << eb << endl;
     }

}
