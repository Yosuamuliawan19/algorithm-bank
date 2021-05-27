#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>
#include<set>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
     set<string > st;
	char c;
     while (cin){
          string tmp = "";
          for (int i=0;i<s.length();i++){
               if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;

               if (s[i] >= 'a' && s[i] <= 'z'){
                    tmp += s[i];
               }else{
                    st.insert(tmp);
                    // cout << tmp << endl;
                    tmp = "";
               }
          }
          st.insert(tmp);
     }
     for (set<string,greater<string> >::iterator i=st.begin();i!=st.end();i++){
          if (*i =="") continue;
          cout << *i << endl;
     }
	return 0;
}
