#include<stdio.h>
#include<vector>
using namespace std;
vector<int> adjList;
vector<int> result;
vector<int> visited;
int n;
int dfs(int x){
     int ans = 0;
     printf("cur %d" , x);
     for (int i=0;i<n;i++){
          if (result[i] == -1){
               ans += dfs(i);
          }else{
               ans += result[i];
          }
     }
     result[x] = ans;
     return ans;

}
int main(){
     int tc; scanf("%d", &tc);
     for(int t=0;t<tc;t++){
          scanf("%d", &n);
          adjList = vector<int>(n,0);
          result = vector<int>(n,-1);
          visited = vector<int>(n,1);
          int a , b ;
          for (int i=0;i<n;i++){
               scanf("%d %d" , &a, &b);
               adjList[a-1] = b-1;

          }

          for (int i=0;i<n;i++){
               if (result[i] == -1){
                    visited = vector<int>(n,1);
                    printf("ans %d",  dfs(i));
               }
          }
          for (int i=0;i<n;i++){
               printf("%d\n", result[i]);
          }
     }




     return 0;
}
