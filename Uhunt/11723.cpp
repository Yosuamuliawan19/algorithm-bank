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



int main(int argc, char const *argv[])
{
	int r,n;
     int t = 1;
     while (cin >> r >> n){
          if (!r && !n) break;
          int ans = 100;
          r-=n;
          for (int i=0;i<=26;i++){
               if (n*i >= r){
                    ans = i; break;
               }
          }
          cout << "Case "<< t++ << ": ";
          if (ans > 26) cout << "impossible\n";
          else cout << ans << endl;
     }

	return 0;
}
