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

int gcd(int a, int b){
     if (a == 0 || b == 0) return 0;
     if (a == b) return a;
     if (a > b){
          return gcd(a-b,b);
     }else{
          return gcd(a,b-a);
     }
}
int main()
{
     ll l, r;
     cin >> l >> r;
     bool suc = 0;
     for (int i=l;i<=r;i++){
          for (int j=i;j<=r;j++){
               for (int k=j;k<=r;k++){
                    if (gcd(i,j) == 1 && gcd(j,k) == 1 && gcd(i,k) > 1){
                         cout << i << " " << j << " " << k << endl;
                         suc = 1;
                    }
                    if (suc) break;
               }
               if (suc) break;
          }
          if (suc) break;
     }


	return 0;
}
