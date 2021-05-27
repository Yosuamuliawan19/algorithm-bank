#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(){
     map<int,int> m ;
     long long n , k;
     scanf("%lld %lld" , &n, &k);
     long long temp ;
     for(int i=0;i<n;i++){
          scanf("%lld" , &temp);
          m[temp] = 1;
     }
     std::string x = "";
     long long count = 0;
     for (int i=1;i<1000000001;i++){
          if (m.find(i) == m.end()){
               if (k - i >= 0 ){
                    count ++;
                    x += std::to_string(i) + " ";
                    k-= i;
                    if (k == 0) break;
               }else{
                    break;
               }

          };

     }
     std::cout << count << "\n";
     std::cout << x << "\n";

     return 0;
}
