#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n;

int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);

     cin >> tc;
     while (tc--){
          cin >> n;
          int idx = 0;
          vector<int> ans;
          while (n != 0){
               ll m = n % 10;
               n /= 10;
               ans.push_back(m);
               idx ++;
          }
          int idx2 = idx;
          // cout << idx << endl;
          string cur = "";
          vector<string> real_ans;
          for (int i=idx-1;i>=0;i--){
               idx2--;
               if (ans[i] == 0) continue;
               cur = to_string(ans[i]);
               for (int j=0;j<idx2;j++){
                    cur += "0";
               }
               real_ans.push_back(cur);
          }
          cout << real_ans.size() << "\n";
          for (int i=0;i<real_ans.size();i++){
               if (i != 0) cout << " ";
               cout << real_ans[i];
          }
          cout << "\n";
          // cout << n << endl;
     }

}
