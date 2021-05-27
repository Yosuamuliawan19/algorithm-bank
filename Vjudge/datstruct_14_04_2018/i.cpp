#include<iostream>
#include<queue>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;
int main (){

     int tc;
     cin >> tc;
     while (tc--){
          int n , m; cin >> n >> m;
          int q[1001] = {0};
          int s[101] = {0}, sidx = 0;
          map <int ,int> ma;
          for (int i=0;i<n;i++){
               cin >> q[i];
               if (ma.find(q[i]) == ma.end()){
                    // cout << q[i] << " adding to map \n";
                    ma[q[i]] = 1;
                    s[sidx] = q[i];
                    sidx ++;
               }else{
                    ma[q[i]]++;
               }
          }
          sort(s , s+n, greater<int>());
          int idx = 0;
          int cnt = 0;
          // cout << "queue\n";
          // for (int i=0;i<n;i++){
          //      cout << q[i] << " ";
          // }
          // cout << "\n";
          // cout << "map\n";
          // for (map<int,int>::iterator it=ma.begin();it!=ma.end();it++){
          //      cout << it->first  << " " << it->second << "\n";
          // }
          // cout << "\n";
          // cout << "stack\n";
          // for (int i=0;i<sidx;i++){
          //      cout << s[i]  << " ";
          // }
          // cout << "\n";

          int l = 0 , r =n;
          while (1){
               // cout << "l =  " << l << " r =  " << r << " m =  " << m<<
               // " s[idx] = " <<s[idx] << " q[l] = "  << q[l] <<endl;

               if (q[l] != s[idx]){
                    if (l == m){
                         m = r;
                    }
                    q[r] = q[l];
                    r++;
               }else{
                    cnt ++;
                    if (l == m ){
                         break;
                    }
                    ma[q[l]]--;
                    if (ma[q[l]] == 0){ idx++;};
               }
               l++;
          }
          cout << cnt << endl;
     }


}
