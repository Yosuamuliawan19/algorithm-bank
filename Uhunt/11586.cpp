#include<iostream>
using namespace std;
int main (){
     int tc;
     string tmp;
     cin >> tc;
     cin.ignore();


     while (tc--){
          int f=0,m=0;
          getline(cin,tmp);
          for (int i=0;i<tmp.length();i++){
               if (tmp[i] == 'F'){
                    f++;
               }else if (tmp[i] == 'M'){
                    m++;
               }
          }
          if (f == m && tmp.length() >= 4){
               cout << "LOOP\n";
          }else{
               cout << "NO LOOP\n";
          }
     }
     return 0;
}
