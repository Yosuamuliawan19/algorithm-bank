#include<iostream>
#include<vector>
#include<stack>
#include<stdio.h>
typedef long long ll;
using namespace std;
int main (){
     vector<vector<int> > arr;
     vector<int> sz;
     int tc, n, q;
     int op, a, b;
     scanf("%d", &tc);
     int topn = 0;

     while (tc--){
          scanf("%d %d", &n, &q);
          n++;
          if (n > topn) {
               for (int i=0;i<n-topn;i++){
                    arr.push_back(vector<int>());
                    sz.push_back(0);
               }
               topn = n;
          }
          // cout << sz.size() << " " << arr.size() << endl;
          for (int i=0;i<topn;i++){
               for (int j=0;j<arr[i].size();j++){
                    arr[i].pop_back();
               }
               sz[i] = 0;
          }
          while (q--){
               scanf("%d", &op);
               if (op == 1){
                    scanf("%d %d", &a, &b);
                    int s = sz[a];
                    sz[a] ++;
                    arr[a].push_back(b);

               }else if (op == 2){
                    scanf("%d", &a);
                    if (sz[a] == 0){
                         printf("EMPTY\n");
                    }else{
                         int s = sz[a];
                         int ans = arr[a][s-1];
                         arr[a].pop_back();
                         sz[a]--;
                         printf("%d\n", ans);
                    }
               }else{
                    scanf("%d %d", &a, &b);
                    int s = sz[a];
                    for (int i=0;i<sz[b];i++){
                         arr[a].push_back(arr[b][i]);
                    }
                    arr[b].clear();
                    sz[a] += sz[b];
                    sz[b] = 0;
               }
          }
     }
}
