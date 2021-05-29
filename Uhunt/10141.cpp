#include<iostream>
#include<vector>
#include<string>
#include<climits>

using namespace std;
int main (){
     int n,p;
     string tmp, tmp2;
     while (cin >> n >> p){
          cout << n << " np "<< p << endl;
          if (n == 0 && p == 0) break;
          cin.ignore();
          string name; double p = INT_MAX, r = 0;
          for (int i=0;i<n;i++){
               getline(cin, tmp);
          }
          double curp, curr;
          for (int i=0;i<p;i++){
               getline(cin, tmp);
               cin >> curp >> curr;
               cout << tmp << endl;
               cin.ignore();
               for (int j=0;j<curr;j++){
                    getline(cin, tmp2);
               }
               if (curr >= r){
                    if (curr == r){
                         if (curp > p){
                              name = tmp;
                              p = curp;
                              r = curr;
                         }
                    }else{
                         name = tmp;
                         p = curp;
                         r = curr;
                    }
               }
          }
          cout << name << r << endl;
          cout << "done\n";
     }





     return 0;
}
