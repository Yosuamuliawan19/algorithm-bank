#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>
#include<climits>

using namespace std;
int main (){
     int n,p;
     string tmp,tmp2;
     int tc = 1;
     while (scanf("%d %d", &n,&p)){
          if (n == 0 && p == 0) break;
          cin.ignore();
          if (tc > 1) cout << "\n";
          for (int i=0;i<n;i++){
               getline(cin, tmp);
          }
          double mon;
          int req;
          double m = 0, r = 0;
          string name;
          for (int i=0;i<p;i++){
               getline(cin, tmp);
               scanf("%lf %d", &mon,&req);
               cin.ignore();
               for (int j=0;j<req;j++){
                    getline(cin,tmp2);
               }
               if (req >= r){
                    if (req == r){
                         if (mon < m){
                              name = tmp;
                              r = req;
                              m = mon;
                         }
                    }else{
                         name = tmp;
                         r = req;
                         m = mon;
                    }
               }
          }
          cout << "RFP #" << tc++ << endl;
          cout << name << "\n";
     }



}
