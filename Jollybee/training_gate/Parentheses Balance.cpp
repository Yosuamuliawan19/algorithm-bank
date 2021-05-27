#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>
#include<stack>

#include <string.h>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
     int tc;
     string s;
     cin >> tc;
     while (tc--){
          stack<char> q;
          cin >> s;
          for (int i=0;i<s.length();i++){

               if (s[i] == '('){
                    q.push('(');
               }else if (s[i] == '['){
                    q.push('[');
               }else if (s[i] == ')'){
                    if (q.empty()){
                         q.push('a');
                         break;
                    }
                    else if (q.top() == '(') q.pop();
               }else if (s[i] == ']'){
                    if (q.empty()){
                         q.push('a');
                         break;
                    }
                    else if (q.top() == '[') q.pop();
               }
          }
          if(!q.empty()){
               cout << "tidak\n";

          }else{
               cout << "ya\n";
          }
     }

	return 0;
}
