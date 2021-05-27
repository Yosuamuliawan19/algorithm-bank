#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main (){
     int n, k;
     cin >> n >> k;
     vector<int> games(n);
     vector<int> bill(k);
     for (int i=0;i<n;i++){
          cin >> games[i];
     }
     for (int i=0;i<k;i++){
          cin >> bill[i];
     }
     int cnt = 0, idx = 0;
     for (int i=0;i<n;i++){
          if (idx == k) break;
          if(bill[idx] >= games[i]){
               idx++;
               cnt++;
          }
     }
     cout << cnt << endl;




     return 0;
}
