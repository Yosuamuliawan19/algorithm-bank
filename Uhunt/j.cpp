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

int const sz = 100010;
int const mod = 1000000007;
ll arr[sz], pref[sz];
int main(int argc, char const *argv[])
{
     pref[0] =1;
     for (int i=1;i<sz;i++){
          pref[i] = pref[i-1]*2;
          pref[i]%= mod;
          // cout << pref[i] << endl;
     }
     arr[0] = 1;
     arr[1] = 1;
     for (int i=2;i<sz;i++){
          arr[i] =(arr[i-1]*(pref[i-1]-1))%mod;
          // cout << pref[i-1]-1<< endl;
     }
	int tc,n;
	cin >> tc;
     while (tc--){
          cin >> n;
          cout << arr[n] << endl;
     }

	return 0;
}
