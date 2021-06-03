#include<iostream>
#include<vector>
#include<string.h>
#include<string>
typedef long long ll;
using namespace std;
ll n, k;
ll st[1000001];
void build(){
     for (ll i=n-1; i>0; i--){
          st[i] = st[(i<<1)] * st[(i<<1|1)];
     }
}
void modify(ll p, ll val){
     for (st[p+=n] = val; p>>=1;){
          st[p] = st[(p<<1)] * st[(p<<1|1)];
     }
}
ll query(ll l, ll r){
     ll sum = 1;
     for (l+=n, r+=n; l <= r; l>>=1, r>>=1){
          if (l&1){
               sum *= st[l++];
          }
          if (!(r&1)){
               sum *= st[r--];
          }
     }
     return sum;
}

int main (){
     while (cin >> n >> k){
          for (ll i=0;i<n;i++){
               cin >> st[i+n];
          }
          build();
          char c;
          ll l , r;
          string res = "";
          for (ll i=0;i<k;i++){
               cin >> c >> l >> r;
               if (c == 'C'){
                    modify(l-1, r);
               }else{
                    ll cur = query(l-1, r-1);
                    if (cur > 0){
                         res += '+';
                    }else if (cur < 0){
                         res += '-';
                    }else{
                         res += '0';
                    }

               }
          }
          memset(st, 0, sizeof(st));
          cout << res << endl;
     }

}
