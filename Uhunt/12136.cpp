#include<iostream>
#include<stdio.h>

using namespace std;
int main (){
     int n;
     string s1,s2;
     scanf("%d\n", &n);
     for (int t=1;t<=n;t++){
          getline(cin , s1);
          getline(cin , s2);
          int wb, we, mb, me;
          wb = ((s1[0]-'0')*10 + s1[1]-'0')*60 + (s1[3]-'0')*10 + s1[4]-'0';
          we  =((s1[6]-'0')*10 + s1[7]-'0')*60 + (s1[9]-'0')*10 + s1[10]-'0';
          mb = ((s2[0]-'0')*10 + s2[1]-'0')*60 + (s2[3]-'0')*10 + s2[4]-'0';
          me  =((s2[6]-'0')*10 + s2[7]-'0')*60 + (s2[9]-'0')*10 + s2[10]-'0';
          // cout << wb << " " << we <<" " << mb << " " << me << endl;
          bool f = 1;
          if (wb < mb){
               if (we < mb){
                    f = 1;
               }else{
                    f = 0;
               }
          }else{
               if (me < wb){
                    f = 1;
               }else{
                    f = 0;
               }
          }
          if (f){
               cout << "Case "<< t << ": Hits Meeting\n";
          }else{
               cout << "Case "<< t << ": Mrs Meeting\n";
          }
     }




     return 0;
}
