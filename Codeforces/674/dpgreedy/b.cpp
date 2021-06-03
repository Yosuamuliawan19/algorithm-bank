#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);

     ll arr[6][10];
     memset(arr, 0, sizeof(arr));
     ll n, idx = 0, maxcur = 0;
     cin >> n;
     while (n != 0){
          ll cur = n % 10;
          n /= 10;
          // cout << cur << " " ;
          for (int i=0;i<cur;i++){
               arr[idx][i] = 1;
          }
          if (maxcur < cur){
               maxcur = cur;
          }
          idx ++;
     }
     // for (int i=0;i<6;i++){
     //      for (int j=0;j<10;j++){
     //           cout << arr[i][j];
     //      }
     //      cout << endl;
     // }
     cout << maxcur << endl;
     for (int i=0;i<maxcur;i++){
          ll curidx = idx-1;
          while (arr[curidx][i] == 0){
               curidx--;
          }
          for (int j=curidx;j>=0;j--){
               cout <<  arr[j][i];
          }
          if(i!= maxcur-1)cout << " ";
     }
}
