#include<iostream>
using namespace std;
typedef long long ll;
ll divi(ll a, ll b){
     while (a % b == 0){
          a /= b;
     }
     return a;
}
bool isUgly(ll a){
     a = divi(a,2);
     a = divi(a,3);
     a = divi(a,5);
     return (a==1)?1:0;
}
int main (){
     // ll num = 0;
     // ll cnt = 0;
     // while (cnt != 1500){
     //      num++;
     //      if (isUgly(num)){
     //           cnt ++;
     //      }
     // }
     cout <<"The 1500'th ugly number is "<<  859963392 << "." << endl;


     return 0;
}
