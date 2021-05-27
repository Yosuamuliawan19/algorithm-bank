#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
     ll n,m,c,tmp;
     ll cur = 0;
     int tc = 1;
     while (cin >> n >> m >> c){
          if (n == 0 && m == 0 && c == 0) break;
          cur = 0; bool blow = false;
          vector<int> cap(n,0);
          for (int i=0;i<n;i++){
               cin >> cap[i];
          }
          int max = -1;
          for (int i=0;i<m;i++){
               cin >> tmp;
               cur += cap[tmp-1];
               cap[tmp-1] = -1 * cap[tmp-1];
               if (cur > c) blow = true;
               if (cur > max) max = cur;
          }
          if (blow){
               cout << "Sequence " << tc ++ << endl;
               cout << "Fuse was blown.\n\n";
          }else{
               cout << "Sequence " << tc ++ << endl;
               cout << "Fuse was not blown.\n";
               cout << "Maximal power consumption was " << max << " amperes.\n\n";
          }



     }



     return 0;
}
