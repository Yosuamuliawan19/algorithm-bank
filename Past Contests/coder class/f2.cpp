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
#include<string.h>


// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;


int tc; int n,p,k,m,s; string j; int x; int a,b;
int tmp[110][4];
int memo[110][20][20][20];
int dp (int val , int idx,  int kul, int man, int sek){
     if (idx == 0) return -1;
     if (kul < 0 || man < 0 || sek < 0) return -1;
     if (kul == 0 && man == 0 && sek == 0) return val;
     if (tmp[idx-1][0] == -1) return dp(val,idx-1,kul,man,sek);
     int a = tmp[idx-1][0], b = tmp[idx-1][1], c = tmp[idx-1][2], d = tmp[idx-1][3];
     return max(dp(val+a, idx-1, kul-b, man-c, sek-d), dp(val,idx-1,kul,man,sek));
}
int main(int argc, char const *argv[])
{
     cin >> tc;
     while (tc--){
          cin >> n >> p >> k >> m >> s;
          memset(tmp, 0, sizeof(tmp));
          memset(memo,0,sizeof(memo));
          int idx = 0;
          for (int i=0;i<n;i++){

               cin >> j >> x;
               tmp[idx][0] = x;
               if (j == "kuli"){
                    tmp[idx++][1] = 1;
               }else if (j == "mandor"){
                    tmp[idx++][2] = 1;
               }else{
                    tmp[idx++][3] = 1;
               }
          }
          for (int i=0;i<p;i++){
               cin >> a >> b >> x;
               tmp[idx][0] = x + tmp[a-1][0] + tmp[b-1][0];
               tmp[idx][1] = tmp[a-1][1] + tmp[b-1][1];
               tmp[idx][2] = tmp[a-1][2] + tmp[b-1][2];
               tmp[idx++][3] = tmp[a-1][3] + tmp[b-1][3];
               tmp[a-1][0] = -1;
               tmp[b-1][0] = -1;
          }
          int smth = k+m+s;
          if (smth > n){
               cout << "tidak mungkin\n";
               continue;
          }
          int ans = dp (0,idx,k,m,s);
          if (ans == -1){
               cout << "tidak mungkin\n";
          }else cout << ans << endl;
     }
	return 0;
}
