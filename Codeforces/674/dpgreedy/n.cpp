#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
map<ll,ll> memo;
ll dp(ll n){
     if (n <= 2) return n;
     if (memo.find(n) != memo.end()) return memo[n];
     memo[n] = max((ll)n/2, dp((ll)n/2))  +  max((ll)n/3, dp((ll)n/3)) + max((ll)n/4, dp((ll)n/4));
     // cout << n << " " << memo[n] << endl;
     return memo[n];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll n;
     while (cin >> n){
          cout << dp(n) << "\n";
     }

     return 0;
}
