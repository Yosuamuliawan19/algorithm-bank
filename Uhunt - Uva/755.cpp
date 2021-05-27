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
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{


     map<char,char> conv;
     char num = '1';
     for (int i=0;i<24;i++){
          if (i % 3 == 0)  num ++;
          int j;
          if ((char)(i+65) >= 'Q'){
               j = i+1;
          }else{
               j = i;
          }
          conv[(char)(j+65)] = num;
          // cout << (char)(j+65) << " " << num << endl;
     }
	// ios_base::sync_with_stdio(false);
	int tc,n;
     string s;
	cin >> tc;
     int t =0;
     while (tc--){
          cin.ignore();
          cin >> n;
          t++;if(t!=1) cout << endl;
          map<string, int> m;
          for (int i=0;i<n;i++){
               cin >> s;
               string tmp = "";
               for (int j=0;j<s.length();j++){
                    if (s[j] == '-'){
                         continue;
                    }else if (s[j] >= '0' && s[j] <= '9'){
                         tmp += s[j];
                    }else{
                         tmp += conv[s[j]];
                    }

                    if (tmp.length() == 3) tmp+='-';
               }
               // cout << tmp << endl;
               m[tmp] ++;
          }
          int cnt = 0;
          for (map<string,int>::iterator it = m.begin(); it!=m.end();it++){
               if (it->second > 1){
                    cout << it->first << " " << it->second << endl;
                    cnt ++;
               }
          }
          if (cnt == 0){
               cout << "No duplicates.\n";
          }
     }

	return 0;
}
