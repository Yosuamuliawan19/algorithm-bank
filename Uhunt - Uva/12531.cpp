#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main (){
     int deg;
     map<int,bool> pos;
     int h = 0;
     for (int i=0;i<=360;i++){
          if (i != 0 && i % 12 == 0){
               h++;
          }
          pos[abs(h-i)] = 1;
     }
     while (cin >> deg){
          if (deg % 6 != 0){
               cout << "N\n";
               continue;
          }
          deg /= 6;
          if (pos.find(deg) == pos.end()){
               cout << "N\n";
          }else{
               cout << "Y\n";
          }

     }



     return 0;
}
