#include<iostream>
#include<vector>
using namespace std;
const int sz = 100000;
bool isPrime[sz];
vector<int> primeList;
void sieve(){
     for (int i=0;i<sz;i++){
          isPrime[i] = true;
     }
     isPrime[0] = false;
     isPrime[1] = false;
     for (int i=0;i<sz;i++){
          if
          if (isPrime[i]){
               for (int j=i*2;j<sz;j+=i){
                    isPrime[j] = false;
               }
               primeList.push_back(i);
               // cout << i << endl;
          }
     }

}
int psz;
int main (){
     sieve();
     psz = primeList.size();
     int cnt = 0;
     for (int i=1;i<INT_MAX;i++){
          bool suc = true;
          for (int j=0;j<psz;j++){
               if (i % primeList[j] == 0){
                    suc = false;
               }
          }
          if (suc){
               cout << i << endl;
               cnt++;
          }
          if (cnt == 1500) {
               cout << i << endl;
               break;
          }
     }

     return 0;
}
