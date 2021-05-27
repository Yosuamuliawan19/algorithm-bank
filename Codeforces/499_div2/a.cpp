#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>

using namespace std;
typedef long long ll;
int n, k;
string s;
int mn = INT_MAX;
void dp(int idx , int cnt, string cur, int ans){
     if (ans >= mn) return;

     if (cnt == k){
          mn = min(ans, mn);
          return ;
     }
     if (idx == n) return;
     if (cnt != 0){
          if (s[idx] > cur[cnt-1]+1) {
               dp (idx+1, cnt+1, cur+s[idx], ans + (s[idx]-'a'+1));
          }
     }else{
          dp (idx+1,cnt+1,cur+s[idx], ans + (s[idx]-'a'+1));
     }
     dp (idx+1, cnt, cur, ans);
}
int main (){
     cin >> n >> k;
     cin >> s;
     sort(s.begin(),s.end());
     dp(0,0,"",0);
     if (mn == INT_MAX){
          mn = -1;
     }
     cout << mn << endl;


     return 0;
}
