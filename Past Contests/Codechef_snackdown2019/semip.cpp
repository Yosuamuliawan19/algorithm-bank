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
bool isPrime[210];
vector<int> plist;
void sieve(){
     memset(isPrime, 1, sizeof(isPrime));
     isPrime[0] = isPrime[1] = 0;
     for (int i=2;i<210;i++){
          if (isPrime[i]){
               plist.pb(i);
               // cout << i << endl;
               for (int j=i*2;j<210;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
}
int tc,now,n,m;
int main()
{

     sieve();
     map<int,bool> mapp;
     cin >> tc;
     while (tc--){
          cin >> now;
          bool f = 0;
          for (int j=1;j<now;j++){
          n = now-j;
          m = j;


          bool f1 = 0, f2 = 0;
          if (mapp.find(n) != mapp.end()) f1 = 1;
          else{
               for (int i=0;i<plist.size();i++){
                    if (n % plist[i] == 0){
                         int dv = n / plist[i];
                         if (dv != plist[i] && isPrime[dv]){
                              f1= 1;
                              break;
                         }
                    }
               }
          }
          if (mapp.find(m) != mapp.end()) f2 = 1;
          else{
               for (int i=0;i<plist.size();i++){
                    if (m % plist[i] == 0){
                         int dv = m / plist[i];
                         if (dv != plist[i] && isPrime[dv]){
                              f2= 1;
                              break;
                         }
                    }
               }
          }


          if (f1) mapp[n] = 1;
          if (f2) mapp[m] = 1;

          if (f1 && f2) {
               // cout << n << " " << m << endl;
               f = 1;
               break;
          }
          }
          if (f) cout << "YES\n";
          else cout << "NO\n";
     }

	return 0;
}
