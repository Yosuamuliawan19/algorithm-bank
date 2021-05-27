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
#include<set>
#include<queue>
#include<string>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
ll arr[100010]= {0};
ll n, m, q, l, r;
string a,b,c;
int main(int argc, char const *argv[])
{

     scanf("%lld %lld %lld" , &n,&m,&q);
     cin >> a >> b;
     for (int i=0;i<n;i++){
          ll cur = 0;
          while (b[cur] == a[i+cur]){
               cur ++;
               if (cur == m) {
                    arr[i] = 1;
                    // cout << i << endl;
               }
          }
     }
     for (int i=0;i<q;i++){
          scanf("%lld %lld", &l,&r);
          int cnt = 0 ;
          for (int j=l-1;j<r-m+1;j++){
               cnt += arr[j];
          }
          printf("%d\n",cnt);
     }

	return 0;
}
