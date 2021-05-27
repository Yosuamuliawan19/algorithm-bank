#include<bits/stdc++.h>
#define pii pair<int,int>
#define piii pair<pair<int, int> ,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
int dirx[8] = {1,1,1,-1,-1,-1,0,0};
int diry[8] = {1,-1,0,1,-1,0,1,-1};
ll k, l;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> l >> k;
     if (k%l != 0){
          cout << "NO\n";
          return 0;
     }

     int ans = 0;
     while (k != 1 && k%l == 0){
          // cout << k <<  " -" << endl;
          k /= l;
          ans ++;
     }
     if (k != 1){
          cout << "NO\n";
          return 0;
     }else{
          cout << "YES\n";
          cout << ans-1 <<"\n";
          return 0;
     }
     return 0;
}
