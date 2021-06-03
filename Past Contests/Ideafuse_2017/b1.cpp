#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<iomanip>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>


#define MP(a,b) make_pair(a,b)
#define FI first
#define SE second
#define PB(a,b) push_back(a,b);

typedef long long ll;
using namespace std;

ll gcd(ll a , ll b)
{
     if(b==0) return a;
     a%=b;
     return gcd(b,a);
}
int main (){
     ll tc, n;
     string s;

     cin >> tc;
     for (int t=1;t<=tc;t++){
          vector<ll> arr(26,vector<ll>(n));
          cin >> n >> s;
          arr[s[0]-65]++;
          for (int i=1;i<n;i++){
               arr[s[i]-65][i] = arr[s[i]-65][i-1] + 1;
          }
          vector<ll> arr2;
          for (int i=0;i<26;i++){
               if (arr[i] > 0){
                    arr2.push_back(arr[i]);
               }
          }
          ll ans = arr2[0];
          for (int i=0;i<arr2.size();i++){
               ans = gcd(ans, arr[i]);
          }

          e
          cout << "Case #" << t << ": " << ans << "\n";
     }
}
