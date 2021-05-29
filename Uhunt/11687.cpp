#include<iostream>
using namespace std;
typedef long long ll;
int main(){
     string s;
     while (getline(cin, s)){
          if (s == "END") break;
          if (s == "1"){
               cout << "1\n";
               continue;
          }
          ll l = s.length();
          int ans = 1;
          while (l > 1){
               int tmp = l;
               l = 0;
               while (tmp > 0){
                    l++; tmp/= 10;
               }
               ans ++;
          }
          cout << ans+1<< "\n";

     }




     return 0;
}
