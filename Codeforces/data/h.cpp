#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string st[60], a;
     ll idx = 0, tc;
     cin >> tc;
     while (tc--){
          cin >> a;
          if (a == "pwd"){
               cout <<"/";
               for (int i=0;i<idx;i++){
                    cout << st[i] << "/";
               }
               cout << "\n";
          }else if (a == "cd"){
               cin >> a;
               string cur = "";
               for (int i=0;i<a.length();i++){
                    if (a[i] == '/'){
                         // cout << cur << "-" << endl;
                         if (cur == ".."){
                              idx--;
                         }else if (cur != ""){
                              st[idx++] = cur;
                         }
                          cur = "";
                    }else {
                         cur += a[i];
                    }
               }
               if (cur == ".."){
                    idx--;
               }else if (cur != ""){
                    st[idx++] = cur;
               }
               // cout << cur <<"-\n";
          }
     }

}
