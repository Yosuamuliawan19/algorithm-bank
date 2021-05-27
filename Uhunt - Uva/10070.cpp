#include<iostream>
using namespace std;
typedef long long ll;
int main(){
     ll n;
     ll tc = 0;
     while (cin >> n ){
          if (tc != 0)cout<<"\n";
          tc++;
          bool l=0,h=0,b=0;
          if ((n % 4 == 0 && n % 100 != 0)||(n % 400 == 0)){
               l =1;
          }
          if (n % 15 == 0){
               h =1;
          }
          if (n % 55 == 0 && l){
               b =1;
          }

          if (l){
               cout << "This is leap year.\n";
          }
          if (h){
               cout << "This is huluculu festival year.\n";
          }
          if (b){
               cout << "This is buluculu festival year.\n";
          }
          if (!l && !h && !b){
               cout << "This is an ordinary year.\n";
          }
     }



     return 0;
}
