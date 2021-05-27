#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>

using namespace std;
typedef long long ll;
int n, k;
string s;
int mn = INT_MAX;
int iter =0;
void dp (int idx, string cur, int tot){
     iter ++;
     if (tot >= mn) return;
     if (cur.length() == k){
          mn = min(tot,mn);
          return;
     }
     if (idx == n) return;
     if (cur.length() == 0){
          dp (idx+1,cur+s[idx],tot+(s[idx]-'a'+1));
          dp (idx+1,cur,tot);
     }else{
          if (s[idx] > cur[cur.length()-1]+1){
               dp (idx+1, cur + s[idx], tot + (s[idx]-'a'+1));
          }
          dp (idx+1,cur,tot);
     }
}
int main (){
     cin >> n >> k >> s;
     sort(s.begin(),s.end());
     dp (0,"",0);
     if (mn == INT_MAX) mn = -1;
     cout << mn << endl;
     // cout << iter << endl;

     return 0;
}
