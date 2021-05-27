// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
string parse(string s){
     string res = "";
     for (int i=0;i<s.length();i++){
          if (s[i] >= 'A' && s[i] <= 'Z'){
               res += (char) (s[i]+32);
          }else if (s[i] >= 'a' && s[i] <= 'z'){
               res += (char) (s[i]);
          }
     }
     return res;
}
bool check(char a){
     if (a >= 'A' && a <= 'Z'){
          return 1;
     }else if (a >= 'a' && a <= 'z'){
          return 1;
     }
     return 0;
}

int main()
{

     set<string> st;
     vector<string> v;
     string s;

     while (getline(cin, s)){
          string news = "";
          for (int i=0;i<s.length();i++){
               if (!check(s[i])){
                    // cout << news << endl;
                    news = parse(news);
                    if (st.find(news) == st.end()){
                         v.pb(news);
                         st.insert(news);
                    }
                    news = "";
               }else{
                    news+= s[i];
               }
          }
          // cout << news << endl;
          news = parse(news);
          if (st.find(news) == st.end()){
               v.pb(news);
               st.insert(news);
          }



     }

     sort(v.begin(), v.end());
     for (int i=0;i<v.size();i++){
          if (v[i].length() == 0) continue;
          cout << v[i] << endl;
     }

	return 0;
}
