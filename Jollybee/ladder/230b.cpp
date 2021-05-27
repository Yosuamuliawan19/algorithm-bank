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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
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

const int sz = 1000100;
int isPrime[sz];
set<int> plist;
void sieve(){
     memset(isPrime,1,sizeof(isPrime));
     isPrime[0] = 0;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               plist.insert(i);
               for (int j=i*2;j<sz;j+=i){
                    isPrime[j] = 0;
               }
          }
     }

}
int main(int argc, char const *argv[])
{
     sieve();
	ll n, tmp;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> tmp;
          ll cur = sqrt(tmp);
          if (tmp != cur*cur){
               cout << "NO\n";
          }else{
               if (plist.find(cur) == plist.end()) cout << "NO\n";
               else cout << "YES\n";
          }



     }

	return 0;
}
