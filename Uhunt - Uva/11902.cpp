#include<iostream>
using namespace std;
bool visited[100];
int n;
void dfs (int x){
     visited[x] = true;
     for (int i=0;i<n;i++){
          if (adjMatrix[x][i] == 1 && visited[i] == false){
              dfs(i);
          }
     }
}
int main(){
     int tc;
     cin >> tc;
     while (tc--){
          cin >>n;
          int adjMatrix[100][100] = {0};
          for (int i=0;i<n;i++){
               for (int j=0;j<n;j++){
                    cin >> adjMatrix[i][j];
               }
          }
     }

     return 0;
}
