#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll s[1010] = {0};

int main(){
     ll n, cur;
     while (cin >> n){
          if (!n) break;
          ll cnt = 1, idx = 0;
          for (int i=0;i<n;i++){
               while (idx != 0 && s[idx-1] == cnt){
                    cnt ++;
                    idx--;
               }
               cin >> cur;
               if (cnt == cur){
                    cnt ++;
               }else{
                    s[idx++] = cur;
               }
          }
          bool f = 1;
          for (int i=idx-1;i>=0;i--){
               if (s[i] != cnt) {
                    f = 0; break;
               }
               cnt ++;
          }
          if (f){
               cout << "yes\n";
          }else{
               cout << "no\n";
          }

     }


     return 0;
}
