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
     string s;
     cin >> s;
     ll idx = s.length()-1, ans = 0, tmp = 0, mod = 1000000007;
     while (idx >= 0){
          if (s[idx] == 'b'){
               tmp = (tmp+1)%mod;
               idx--;
          }else{
               ans = (ans+tmp)%mod;
               tmp = (tmp*2)%mod;
               idx--;
          }
     }
     cout << ans << endl;



     return 0;
}
