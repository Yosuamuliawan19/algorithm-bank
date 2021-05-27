#include<iostream>
using namespace std;

int main(){
     int tc;
     for(cin>>tc;tc--;){
          int n,x=0,t;
          cin>>n;
          for(int i=0;i<n;i++){
               cin>>t;
               x^=t;
          }
          puts(x!=0?"0":"1");
     }
     return 0;
}
