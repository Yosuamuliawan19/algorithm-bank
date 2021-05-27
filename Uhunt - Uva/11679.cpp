#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main (){
     ll n,b;
     ll d,c,v;
     while (cin >> b>> n){
          if (n == 0 && b == 0) break;
          vector<int> res(b,0);
          for (int i=0;i<b;i++){
               cin >> res[i];
          }
          for (int i=0;i<n;i++){
               cin >> d >> c >> v;
               res[d-1] -= v;
               res[c-1] += v;
          }
          bool flag = true;
          for (int i=0;i<b;i++){
               if (res[i] < 0) flag = false;
          }
          if (flag){
               cout << "S\n";
          }else{
               cout << "N\n";
          }



     }




     return 0;
}
