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
int tc, n;
map<int,int> vals;
int ans;
int ask(int idx){
     if (vals.find(idx) != vals.end()) return vals[idx];
     cout << 1 << " " << idx << endl;
     fflush(stdout);
     int ret; cin >> ret;
     return vals[idx] = ret;
}
void tell(int val){
     cout << 2 << " " << val << endl;
     fflush(stdout);
}
int solve(int k){
     int l = 1, r = n/k;
     int idx = n;
     while (l <= r){
          int m = l + (r-l)/2;
          if (ask(m*k) == ask(m*k+1)){
               r = m-1;
               idx = k * (m-1) +1;
          }else{
               l = m+1;
          }
     }
     return ask(idx);
}

int find_k(){
     int start = ask(1);
     int l = 1, r = n;
     int pos = 1;
     while (l <= r){
          int m = l + (r-l)/2;
          int val = ask(m);
          if (val == start){
               pos = m;
          }
          if (val > start){
               r = m -1;
          }else{
               l = m +1;
          }
     }
     // check if k*2 is bigger than n;
     if (pos*2 > n){
          // group in k+1 is smaller than k
          ans = ask(pos+1); return -1;
     }else{
          if (ask(pos*2) == ask(pos*2+1)){
               if (ask(n) != ask(n-pos)){
                    ans = ask(pos+1);
               }else{
                    ans = 1;
               }
          }
          return pos;
     }
}

int main(int argc, char const *argv[])
{
	cin >> tc;
     while (tc--){
          vals.clear();
          cin >> n;
          ans = -1;
          int gs = find_k();
          if (ans != -1){
               tell(ans); continue;
          }
          ans = solve(gs);
          tell(ans);
     }

	return 0;
}
