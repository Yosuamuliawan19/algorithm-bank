#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cmath>

using namespace std;
int main (){
     int n, q, tmp;
     scanf("%d%d",&n,&q);

     int p[33] = {0};
     for (int i=0;i<n;i++){
          scanf("%d",&tmp);
          int cnt = 0;
          while (tmp >>= 1){
               cnt ++;
          }
          p[cnt]++;
     }
     for (int i=0;i<q;i++){
          scanf("%d", &tmp);
          int ans = 0;
          for (int i=32;i>=0;i--){
               int dv = pow(2,i);
               int take = min (p[i], tmp/dv );
               ans += take;
               tmp -= take * pow(2,i);

          }
          // cout << "tmp = "<< tmp <<endl;
          if (tmp == 0)
          printf("%d\n", ans);
          else printf("-1\n");
     }




     return 0;
}
