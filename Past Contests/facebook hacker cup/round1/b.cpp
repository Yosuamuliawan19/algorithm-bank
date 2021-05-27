#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> res1;
vector<int> res2;

int arr[2000][2];
void pre(int idx){
     if (idx == 0) return;
     res1.push_back(idx-1);
     pre(arr[idx][0]);
     pre(arr[idx][1]);
}
void post(int idx){
     if (idx == 0) return;
     post(arr[idx][0]);
     post(arr[idx][1]);
     res2.push_back(idx-1);
}
int main(){
     int tc,n,k,a,b;
     cin >> tc;
     for (int t=1;t<=tc;t++){
          cin >> n >> k;
          for (int i=0;i<2000;i++){
               for (int j=0;j<2;j++){
                    arr[i][j] =0;
               }
          }

          for (int i=1;i<=n;i++){
               cin >> arr[i][0] >> arr[i][1];
          }
          res1.clear();res2.clear();
          pre(1);post(1);
          vector<int> ans(n,-1);
          int cur = k; bool flag = 1;
          for (int i=0;i<n;i++){
               if (ans[res1[i]] == -1 && ans[res2[i]] == -1){
                    ans[res1[i]] = cur;
                    ans[res2[i]] = cur;
                    cur --;
               }
               else if (ans[res1[i]] == -1 && ans[res2[i]] != -1 ){
                    ans[res1[i]] = ans[res2[i]];
               }
               else if (ans[res1[i]] != -1 && ans[res2[i]] == -1 ){
                    ans[res2[i]] = ans[res1[i]];
               }else if (ans[res1[i]] != ans[res2[i]]){
                    ans[res1[i]] = ans[res2[i]];
                    i = 0;
               }
               if (cur == 0){
                    cur = k;
               }
          }
          bool f = 1;
          vector<bool> fs(k+1,0);
          for (int i=0;i<n;i++){
               fs[ans[res1[i]]] =1;
               fs[ans[res2[i]]] =1;
          }
          for (int i=1;i<=k;i++){
               if (!fs[i]){
                    f=0;
               }
          }
          cout << "Case #" << t << ": ";
          if (f){
               for (int i=0;i<n;i++){
                    cout << ans[i] << " ";
               }
               cout << endl;
          }else{
               cout << "Impossible\n";
          }

     }
}
