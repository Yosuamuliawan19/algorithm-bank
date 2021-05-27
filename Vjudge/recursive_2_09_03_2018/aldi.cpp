#include<iostream>
typedef long long ll;
using namespace std;
int cnt = 0;
void rec(ll sz, string s){
     if (sz == 8){
          cout << s << endl;
          return ;
     }
     for (ll i=0;i<26;i++){
          rec(sz+1, s + (char) (i + 97));
     }
     for (ll i=0;i<26;i++){
          rec(sz+1, s + (char) (i + 65));
     }
}
int main (){
     rec(0, "");
}
