#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<queue>
#include<map>
#include<cmath>

using namespace std;
vector<long long> listRound;

long long roundFunc (long double x){
     if (x - (long long) x >= .5){
          x = (long long) x + 1;
     }else{
          x = (long long) x;
     }
     return x;
}
bool roundUp (long double x){
     if (x - (long long) x >= .5){
          return true;
          x = (long long) x + 1;
     }else{
          return false;
          x = (long long) x;
     }
}
int main (){
     long long tc, n, l;
     scanf("%lld", &tc);
     for (long long t=1;t<=tc;t++){
          scanf("%lld %lld", &n, &l);
          
          printf("Case #%lld: %lld\n", t, tot);
     }
}
