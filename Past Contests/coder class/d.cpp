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
#include<queue>


// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

ll days(ll dif){
     int a = dif/3;
     a *= 2;
     a += (dif%3);
     return a;
}
int main(int argc, char const *argv[])
{
     ll tc, l, n;
     cin >> tc;
     while (tc--){
          cin >> l >> n;
          ll arr[1001];
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort (arr,arr+n);
          ll mx = -1;
          for (int i=0;i<n-1;i++){
               ll cur = days(arr[i+1] - arr[i] - 1);
               // cout << cur << " " << arr[i+1] - arr[i] - 1 <<endl;
               if (cur > mx) mx = cur;
          }

          mx = max(mx, arr[0]-1);
          mx = max(mx,(l-arr[n-1])*2);
          cout << mx << endl;
     }
	return 0;
}
