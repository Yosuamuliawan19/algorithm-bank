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

ll n, arr[1000000], dv, tmp;
const int sz = 20000000;
bool isPrime[sz];
void sieve(){
     for (int i=0;i<sz;i++) isPrime[i] = 1;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               for (int j=i*2;j<sz;j+=i) isPrime[j] = 0;
          }
     }
}
int gcd(int a, int b){
     if (a == b) return a;
     if (a > b){
          return gcd(a-b, b);
     }else{
          return gcd(a, b-a);
     }
}
int main(int argc, char const *argv[])
{
     sieve();
	cin >> n >> arr[0];
     dv = arr[0];
     for (int i=1;i<n;i++){
          cin >> arr[i];
          dv = gcd(dv, arr[i]);
     }
     ll cnt = 0;
     set<ll> st;
     for (int i=0;i<n;i++){
          if (arr[i]/dv <= dv) {
               cnt ++;
          }else if (isPrime[arr[i]/dv]){
               st.insert(arr[i]/dv);
          }
     }
     ll pcnt = st.size();
     if (pcnt >= 1) pcnt -= 1;
     cout << cnt << " " << pcnt << endl;
     if (cnt == n) cnt = -1;
     cout << cnt << endl;
	return 0;
}
