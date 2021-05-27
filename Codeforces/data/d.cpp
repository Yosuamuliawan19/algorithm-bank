#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main (){
     while (cin >> n){
          if (n == 0) break;
          ll arr[100000] = {0}, l = 0 , r = n;
          for (int i=0;i<n;i++){
               arr[i] = i+1;
          }
          bool f = 0;
          ll ans[100000] = {0}, idx=0;
          while (l!=r-1){
               ans[idx++] = arr[l++] ;
               arr[r++] = arr[l++];
          }
          // cout << idx << endl;

               cout << "Discarded cards:";
          // }
          for (int i=0;i<idx;i++){
               // if (i=0) cout << " ";
               cout << " " <<  ans[i] ;
               if (i!=idx-1) cout<< ",";
          }
          cout << "\nRemaining card: " << arr[l] << "\n";
     }
}
