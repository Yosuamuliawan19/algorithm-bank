#include<iostream>
#include<string>
#include<map>


using namespace std;
int main (){
     int k,m;
     string tmp;
     while (cin >> k){
          if (k == 0) break;
          cin >> m;
          map<string,bool> mp;
          for (int i=0;i<k;i++){
               cin >> tmp;
               mp[tmp] = true;
          }
          int c, r;
          bool flag = true;
          for (int i=0;i<m;i++){
               cin >> c >> r;
               int cur = 0;
               for (int i=0;i<c;i++){
                    cin >> tmp;
                    if (mp.find(tmp) != mp.end()) cur ++;
               }
               if (cur < r) flag = false;
          }
          if (flag) cout << "yes\n";
          else cout << "no\n";
     }



     return 0;
}
