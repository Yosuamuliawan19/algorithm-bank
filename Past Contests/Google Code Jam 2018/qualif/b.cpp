#include<stdio.h>
#include<algorithm>

using namespace std;
int main (){
     int tc;
     scanf("%d" ,&tc);
     for (int t=1;t<=tc;t++){
          int n; scanf("%d" , &n);
          int arr1[100001] = {0} , arr2[100001] = {0}, arr3[100001];
          int s1 = 0, s2 = 0, s3 = 0;
          for (int i=0;i<n;i++){
               int cur; scanf("%d", &cur);
               if (i % 2 == 0){
                    arr1[s1] = cur;
                    s1++;
               }else{
                    arr2[s2] = cur;
                    s2++;
               }
               arr3[s3] = cur;
               s3++;
          }
          sort(arr1,arr1+s1);
          sort(arr2,arr2+s2);
          sort(arr3,arr3+s3);
          s1 = 0 ; s2 = 0;
          bool flag = true;
          bool suc = true;
          int err = -1;
          for (int i=0;i<s3;i++){
               if (flag){
                    // printf("comp %d %d", arr3[i], arr1[s1]);
                    if (arr3[i] != arr1[s1]){
                         err = i;
                         suc = false;
                         break;
                    }
                    s1++;
               }else{
                    // printf("comp %d %d", arr3[i], arr2[s2]);
                    if (arr3[i] != arr2[s2]){
                         err = i;
                         suc = false;
                         break;
                    }
                    s2++;
               }
               flag = !flag;
          }
          if (suc){
               printf("Case #%d: OK\n", t);
          }else{
               printf("Case #%d: %d\n", t, err);
          }
     }
}
