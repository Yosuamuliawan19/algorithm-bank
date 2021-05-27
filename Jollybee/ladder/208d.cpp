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

int main()
{
     ll n, prize[5], arr[50];
     cin >> n;
     for (ll i=0;i<n;i++){
          cin >> arr[i];
     }
     for (ll i=0;i<5;i++) cin >> prize[i];
     ll tot = 0;
     ll ans[5] = {0};
     for (ll i=0;i<n;i++){
          tot += arr[i];
          for (ll j=4;j>=0;j--){

               if (prize[j] <= tot){
                    ll times = floor((double)tot/(double)prize[j]);
                    ans[j] += times;
                    tot -= times*prize[j];
               }
               // while (prize[j] <= tot){
               //      // cout << "take " << j+1 <<  " " << tot << endl;
               //      tot -= prize[j];
               //      ans[j] ++;
               //
               // }
          }
     }
     for (ll i=0;i<5;i++){
          if (i != 0) cout << " ";
          cout << ans[i];
     }
     cout << endl;

     cout <<tot << endl;

	return 0;
}
