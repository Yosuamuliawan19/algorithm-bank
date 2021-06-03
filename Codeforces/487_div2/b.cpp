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
#include<climits>
#include<set>
#include<queue>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)




int main(int argc, char const *argv[])
{
     int n, p;
     string s;
     cin >> n >> p;
     cin >> s;
     bool f = 0;
     for (int i=0;i<n-p;i++){
          if (s[i] == '.'){
               if (s[i+p] == '1'){
                    s[i] = '0';
               }else if (s[i+p] == '0'){
                    s[i] = '1';
               }else{
                    if (i-p > 0){
                         if (s[i-p] == '1'){
                              s[i] = '0';
                         }else{
                              s[i] = '1';
                         }
                    }else{
                         s[i] = '0';
                    }
               }
          }
     }
     for (int i=n-p;i<n;i++){
          if (s[i] == '.' )s[i] = '0';
     }
     // cout << s << endl;
     for (int i=0;i<n-p;i++){
          if (s[i+p] != s[i]){
               f = 1; break;
          }
     }
     if (!f){
          cout << "No\n";
     }else{
          cout << s << endl;
     }

	return 0;
}
