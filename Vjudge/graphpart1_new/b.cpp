#include<iostream>
using namespace std;
int main (){

     int tc, a, b;
     cin >> tc;
     while (tc--){
          cin >> a;
          if (a % 2 == 0){
               cout << a/2 << " " << a/2 << endl;
          }else{
               cout << (a/2) +1  << " " << a/2 << endl;
          }
     }
}
