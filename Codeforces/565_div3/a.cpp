#include<stdio.h>
typedef long long ll;
using namespace std;
int main (){
     ll q, n, cnt =0;
     scanf("%lld", &q);
     while (q--){
          scanf("%lld", &n);
          cnt = 0;
          while (!(n%2)) n/=2, cnt++;
          while (!(n%3)) n/=3, cnt+=2;
          while (!(n%5)) n/=5, cnt+=3;
          printf("%lld\n", n==1? cnt : -1);
     }
}
