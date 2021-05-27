// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
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
ll n, k;
string x;
bool lucky(string s){
     for (int i=0;i<s.length();i++){
          if (s[i] != '4' || s[i] != '7') return 0;
     }
     return 1;
}
bool palin(string s){
     int l = 0, r = s.length()-1;
     while (r > l){
          if (s[l] != s[r]) return 0;
          r--; l++;
     }
     return 1;
}
int main()
{
     vector<int> luck, pal;
     bool f = 1;

	cin >> n >> k;
     for (int i=0;i<n;i++){
          cin >> x;
          if (lucky(x)){
               luck.pb(i);
               cout << "lucky - " << x << endl;
          }else if (palin(x)){
               pal.pb(i);
               cout << "pal - " << x << endl;
          }else{
               f = 0;
          }
     }
     // cout << luck.size()<< endl;
     // for (int i=0;i<luck.size()-1;i++){
     //      cout << i << " " << i+1 << endl;
     //      if (luck[i+1]-luck[i] > k){
     //           f = 0; break;
     //      }
     // }
     // for (int i=0;i<pal.size()-1;i++){
     //      if (pal[i+1]-pal[i] > k){
     //           f = 0; break;
     //      }
     // }
     if (f){
          cout << "Yes\n";
     }else{
          cout << "No\n";
     }





	return 0;
}
