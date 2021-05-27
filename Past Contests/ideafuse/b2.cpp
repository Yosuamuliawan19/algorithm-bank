#include<bits/stdc++.h> 
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
int arr[26][500001]={0};
int arr2[26] ={0};
int main (){
     ll tc, n;
     string s;

     cin >> tc;
     for (int t=1;t<=tc;t++){
          cin >> n >> s;
          memset(arr, 0, sizeof(arr));
          arr[s[0]-65][0] = 1;
          for (int i=1;i<n;i++){
               for (int j=0;j<26;j++){
                    arr[j][i] = arr[j][i-1];
               }
               arr[s[i]-'A'][i]++;
          }
          ll ans = 1;
          for (int i=n;i>=0;i--){
               if (n % i != 0) continue;
               int len = n / i;
               for (int j=0;j<26;j++){
                    arr2[j] = arr[j][len-1];
               }
               bool isSame = true;
               for (int j=(len*2) -1;j<n;j+=len){
                    for (int k=0;k<26;k++){
                         if (arr2[k] != (arr[k][j] - arr[k][j-len])){
                              isSame = false;
                              break;
                         }
                    }
               }
               if (isSame){
                    ans = i;
                    break;
               }
          }
          cout << "Case #" << t << ": " << ans << endl;

     }
}
