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

// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(int argc, char const *argv[])
{
     map<string, int> m;
     string cat, tmp;
     string s;
     int cnt = 0;
     while (getline(cin , s)){
          if (s[0] == '#' || s[0] == '!' ){
               if (cat != "") m[cat] = cnt;
               if (s[0] == '!') break;
               cnt = 0;
               tmp = "";
               for (int i=2;i<s.length();i++){
                    tmp += s[i];
               }
               cat = tmp;
          }else{
               cnt ++;
          }
     }
     for (map<string,int>::iterator it =m.begin();it!=m.end();it++){
          cout << it->first << "-"
     <<it->second<<endl;
     }
     tmp = "";
     while (getline(cin, s)){
          cnt = 1;
          for (int i=0;i<=s.length();i++){
               if (i == s.length() || s[i] == '+'){
                    if (s[i] == '+'){
                         string cur = "";
                         for (int j=0;j<tmp.length()-1;j++){
                              cur += tmp[j];
                         }
                         i++;
                         tmp = cur;
                    }
                    cout << "--" << tmp<<  "--" << endl;
                    cnt *= m[tmp];
                    tmp = "";
               }else{
                    tmp+=s[i];
               }
          }
          cout << cnt << endl;
     }
	return 0;
}
