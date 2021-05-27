#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll tc;
     string s;
     stack<char> st;
     cin >> tc;
     while (tc--){
          cin >> s;
          st = stack<char>();
          bool f = 1;
          for (int i=0;i<s.length();i++){
               if (s[i] == '{' || s[i] == '[' || s[i] == '('){
                    st.push(s[i]);
               }else if (s[i] == '}'){
                    if (st.size() > 0 && st.top() == '{'){
                         st.pop();
                    }else f = 0;
               }else if (s[i] == ']'){
                    if (st.size() > 0 &&st.top() == '['){
                         st.pop();
                    }else f = 0;
               }else{
                    if (st.size() > 0 &&st.top() == '('){
                         st.pop();
                    }else f = 0;
               }
          }
          if (f && st.size() == 0){
               cout << "YES\n";
          }else cout << "NO\n";
     }
}
