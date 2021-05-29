#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll parent[40000];
ll ans[40000] = {0};
int fp(int a){
w     else return parent[a] = fp(parent[a]);
}
void unify(int a, int b){
     int pa = fp(a), pb = fp(b);
     if (pa != pb){
          if (pa > pb){
               parent[a] = pb;
          }else{
               parent[b] = pa;
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll tc, n, m;
     ll a, b;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          for (int i=0;i<n;i++) parent[i] = i;
          memset(ans, 0, sizeof(ans));

          for (int i=0;i<m;i++){
               cin >> a >> b;
               unify(fp(a-1),fp(b-1));
               // cout << a-1 << " " << b-1 << endl;
               // for (int i=0;i<n;i++){
               //      cout << fp(i) << " ";
               // }cout << endl;
          }
          for (int i=0;i<n;i++){
               ans[fp(i)] ++;
          }
          ll anss = ans[0];
          for (int i=1;i<n;i++){
               anss = max(anss, ans[i]);
          }
          cout << anss << "\n";
     }


}
