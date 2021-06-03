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
string s, pat;
ll n;
int cnt = 0;
void makeArr(string pat, int* arr){
     int len = 0;
     int m = pat.length();
     arr[0] = 0;
     int i = 1;
     while (i < m){
          if (pat[i] == pat[len]){
               len ++;
               arr[i] = len;
               i++;
          }else{
               if (len != 0) len = arr[len-1];
               else arr[i++] = 0;
          }
     }
}
void kmp(string pat, string txt){
     int m = pat.length();
     int n = txt.length();
     int arr[m];
     makeArr(pat, arr);
     int i = 0, j = 0;
     while (i < n){
          if (pat[j] == txt[i]){
               j++; i++;
          }
          if (j == m){
               // cout << "found at " << i-j << endl;
               cnt ++;
               j = arr[j-1];
          }else if (i < n && pat[j] != txt[i]){
               if (j != 0) j = arr[j-1];
               else i++;
          }
     }
}

int main()
{

     getline(cin, s);
     getline(cin, pat);
     cin >> n;
     string ans = "";

     int l = 0, r = pat.length();
     while (r > l){
          int m = (l+r)/2;
          if (m == 0) break;
          string now = pat.substr(0,m);
          kmp(now, s);
          if (cnt >= n){
               l = m + 1;
               ans = now;
          }else{
               r = m - 1;
          }
          cnt = 0;
     }
     // cout << l << endl;
     if (l != 0) kmp(pat.substr(0,l), s);
     if (cnt >= n) ans = pat.substr(0,l);

     if (ans == "") ans = "IMPOSSIBLE\n";
     cout << ans << endl;

	return 0;
}
