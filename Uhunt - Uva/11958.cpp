#include<iostream>
#include<vector>
#include<climits>
typedef long long ll;
using namespace std;
int main(){
     int tc, n; string s;
     int curh, curm, cur;
     cin >> tc;
     for (int t=1;t<=tc;t++){
          cin >> n >> s;
          curh = (s[0]-'0')*10 + (s[1]-'0');
          curm = (s[3]-'0')*10 + (s[4]-'0');
          // cout << curh << " " << curm << endl;
          cur = (curh*60) + curm;
          ll min = LLONG_MAX;
          int tot = 0;
          for (int i=0;i<n;i++){
               cin >> s >> tot;
               int dy = ((s[0]-'0')*10 + (s[1]-'0'))*60+ (s[3]-'0')*10 + (s[4]-'0');
               // cout << ((s[0]-'0')*10 + (s[1]-'0')) << " " << (s[3]-'0')*10 + (s[4]-'0') << endl;
               // cout << "dy = " << dy << endl;
               if (dy < cur){
                    tot +=  (dy + (24*60));
                    // cout << "next day " <<  tot  << endl;
               }else{
                    tot += dy;
               }
               // cout << tot << endl;
               if (tot < min){
                    min = tot;
               }
          }
          cout << "Case " << t << ": " << min - cur << endl;
     }




     return 0;
}
