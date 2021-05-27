#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tc, n;
string pq;
string pathh;
void rec(ll p , ll q, string path){
     // cout << p << " " << q << " " << path << endl;
     if (p == 1 &&  q == 1) {
          pathh = path;
     }else{
          if (p > q){
               path += '0';
               rec(p-q, q, path);
          }else{
               path += '1';
               rec(p, q-p, path);
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while(tc--){
          cin >> n >> pq;
          ll p = 0, q = 0;
          for (int i=0;i<pq.length();i++){
               if (pq[i] == '/'){
                    i++;
                    while (i != pq.length()) q = q*10 + (pq[i++]-'0');
                    break;
               }
               p = p*10 + (pq[i]-'0');
          }
          rec(p, q, "");
          // cout << p << " " << q << endl;
          // cout << pathh << endl;
          ll ans = 1;
          for (int i=pathh.length()-1;i>=0;i--){
               if (pathh[i] == '1'){
                    ans = 2*ans;
               }else{
                    ans = 2*ans + 1;
               }
               // cout << ans << endl;
          }
          cout << n << " " << ans << endl;
     }

     return 0;
}
