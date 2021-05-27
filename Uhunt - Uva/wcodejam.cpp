#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tc, sz, mod = 1000,  ans = 0, arr[1000];
string s, tmp = "welcome to code jam";
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc; getline(cin, s);

     ll ctc = 1;
     while (tc--){
          string phrase = "welcome to code jam"; // S
          string text; getline(cin, text); // T
          vector<int> ob(text.size(), 1);

          int ans = 0;
          for (int p = 0; p < phrase.size(); ++p) {
              ans = 0;
              for (int i = 0; i < text.size(); ++i) {
                  if (text[i] == phrase[p]) ans = (ans + ob[i]) % 10000;
                  ob[i] = ans;
              }
              // cout << phrase[p] << " " << ans << endl;
          }
          cout << "Case #" << ctc++ << ": ";
          cout << setfill('0') << setw(4) << ans << endl;

     }
     return 0;
}
