#include<stdio.h>
#include<vector>
using namespace std;


vector< int > adjList;
int main(){
     int n , k;
     scanf("%d %d" , &n, &k);
     int temp ;
     adjList.push_back(-1);
     for (int i=1;i<n;i++){
          scanf("%d", &temp);
          adjList.push_back(temp + i);
     };
     //printf("adas\n");
     int cur = 1;
     bool flag = false;
     while (cur <= n){
           // printf("%d\n" , cur );
          if (cur == k){
               flag = true;
               break;
          }
          cur = adjList[cur];
     }
     if (flag){
          printf("YES\n");
     }else{
          printf("NO\n");
     }
}
