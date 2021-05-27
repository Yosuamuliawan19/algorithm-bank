#include<stdio.h>
#include<vector>
#include<math.h>

#include<map>

using namespace std;
int sizeofprimes = 1400000;
vector<bool> isPrime = vector<bool>(10000,true);
vector<int> listPrime ;
void sieve(){
     isPrime[1] = true;
     for (int i=2;i<=10000;i++){
          if (isPrime[i]){
               // printf("%d " , i);
               for (int j=i*2;j<=10000;j+=i){
                    // printf("%d " , j);
                    isPrime[j] = false;
               }
          }
     }
     for (int i=1;i<=10000;i++){
          if (isPrime[i]){
               listPrime.push_back(i);
               // printf("%d ", i );
          }
     }
}
vector<bool> isTaken = vector<bool>(sizeofprimes,true);

void sieve2(int x){
     int curprime = 0;
     while (listPrime[curprime] <= sqrt(x)){

          if (x % listPrime[curprime] == 0){

               int dividend = x / listPrime[curprime];
               // printf("dividends = %d %d\n" , dividend,listPrime[curprime] );
               for (int i=dividend;i<=sizeofprimes;i+=dividend){
                    // printf("%d ", i);
                    // if(i == 4)
                    // printf("4 is false %d" , dividend);
                    isTaken[i] = false;
               }
               // printf("\n" );
               dividend = listPrime[curprime];
               if (dividend != 1){
                    for (int i=dividend;i<=sizeofprimes;i+=dividend){
                         // printf("%d ", i);
                         // if(i == 4) printf("4 is false %d" , dividend);
                         isTaken[i] = false;
                    }
                    // printf("\n" );
               }

          }
          curprime++;
     }
     // printf("sieve done\n" );
}
void nextNum(int x, int min){
     for (int i=min;i<=sizeofprimes;i++){
          if (isTaken[i]){
               printf("%d " ,i);
               x--;
               if (x == 0) break;
               sieve2(i);
               break;
          }
     }
     if (x == 0 ) return;
     for (int i=2;i<=sizeofprimes;i++){
          if (isTaken[i]){
               printf("%d " ,i);
               x--;
               if (x == 0) break;
               for (int j=i;j<=100000;j+=i){
                    isTaken[j] = false;
               }

          }
     }
}
int main (){
     sieve();
     int n; scanf("%d" ,&n);
     vector<int> elem;
     int temp;
     for (int i=0;i<n;i++){
          int n; scanf("%d" ,&temp);
          elem.push_back(temp);
     }
     // printf("\n");
     for (int i=0;i<n;i++){
          if (isTaken[elem[i]] == false){
               // printf("break on %d",elem[i]);
               nextNum(n-i, elem[i]);
               break;
          }else{
               printf("%d ", elem[i] );
               sieve2(elem[i]);
               // printf("adsasdasd\n" );
          }
     }



     return 0;
}
