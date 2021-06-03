#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<climits>
#include<stdio.h>

using namespace std;
int mn = INT_MAX;
int n, q, tmp;
vector<int> coins;
void dp (int idx, int left, int cnt){
     if (left == 0){
          if (cnt < mn) mn = cnt;
     }
     if (idx == n){
          return;
     }

     dp (idx+1, left, cnt);
     dp (idx+1, left-coins[idx], cnt+1);
}
int main (){

     scanf("%d%d",&n, &q);
     for (int i=0;i<n;i++){
          scanf("%d", &tmp);
          coins.push_back(tmp);
     }
     sort(coins.begin(), coins.end(), greater<int>());

     for (int i=0;i<q;i++){
          scanf("%d", &tmp);
          if (tmp % 2 == 1){
               cout << -1 << endl;
               continue;
          }else{
               mn = INT_MAX;
               dp(0, tmp, 0);
               cout << mn << endl;
          }
     }



     return 0;
}
