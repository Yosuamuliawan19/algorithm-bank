#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tc, l, h, w, n, s, arr[110][110], f, r, c;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> l >> h >> w >> n >> s;
          for (int i=0;i<h;i++){
               for (int j=0;j<w;j++){
                    cin >> arr[i][j];
               }
          }
          for (int i=0;i<n;i++){
               cin >> f >> r >> c;
          }
     }



     return 0;
}
