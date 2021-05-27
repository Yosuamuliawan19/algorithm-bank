#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main (){
     ll tc, n, k, v;
     int cas = 1;
     cin >> tc;
     while (tc--){
          cin >> n >> k >> v;
          ll vis = ((v-1) * k) % n;
          // cout << "vis = " << vis << endl;
          vis++;
          vector<string> names(n);
          for (int i=0;i<n;i++){
               cin >> names[i];
          }
          vector<int> result;
          for (int i=0;i<k;i++){
               result.push_back(vis);
               vis ++;
               if (vis > n) vis = 1;
          }
          cout << "Case #" << cas++ << ": ";
          sort(result.begin(), result.end());
          for (int i=0;i<k;i++){
               cout << names[result[i]-1] ;
               if (i != k-1) cout << " ";
          }
          cout << endl;




     }



     return 0;
}
