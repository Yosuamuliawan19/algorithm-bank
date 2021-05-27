#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
     ll n; string s;


     cin >> n;
     for (int i=0;i<n;i++){
          stack<char> st = stack<char>();
          cin >> s;
          for (int j=0;j<s.length();j++){
               bool f = 0;
               if (st.size() != 0){
                    if (st.top() == '(' && s[j] == ')'){
                         st.pop();
                    }else if (st.top() == '[' && s[j] == ']'){
                         st.pop();
                    }else if (st.top() == '{' && s[j] == '}'){
                         st.pop();
                    }else{
                         f = 1;
                         st.push(s[j]);
                    }
               }else{
                    st.push(s[j]);
               }

          }
          if (st.size() == 0){
               cout << "YES\n";
          }else{
               cout << "NO\n";
          }
     }


     return 0;
}
