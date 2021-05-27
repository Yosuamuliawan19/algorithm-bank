#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll arr[100010] = {0}, n = 0;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     while (cin >> arr[n++]){}
     n--;
     for (int i=0;i<n;i++){
          cout << arr[i] <<endl;
     }


     ll mn[100010], hd[100010];
     mn[0] = -1;
     ll len = 0;
     for (int i=1;i<n;i++){
          if (arr[mn[len]] < arr[i]){
               hd[i] = mn[len];
               mn[len+1] = i;
               len ++;
          }else if (arr[mn[0]] > arr[i]){
               mn[0] = i;
          }else{
               ll l=0,r=len;
               while (r > l + 1){
                    ll m = l + (r-l)/2.0;
                    if (arr[mn[m]] < arr[i]){
                         l = m;
                    }else{
                         r = m;
                    }
               }
               hd[i] 
          }

     }
}
