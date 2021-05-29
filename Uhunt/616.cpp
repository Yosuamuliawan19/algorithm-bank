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
     int n;
	while (cin >> n){
          if (n == -1 ) break;
          int ans = -1;
          for (int i=1000;i>1;i--){
               int m = n;
               bool f = 1;
               // cout << "i - " << i <<endl;
               for (int j=0;j<i;j++){
                    if ((m-1)%i != 0){
                         f=  0; break;
                    }
                    // cout << m <<  "-" ;
                    m = m - ((m-1) / i) -1;
                    // cout << m << " ";
               }
               // cout << endl;
               if (f && m%i == 0){
                    ans = i; break;
               }
          }
          cout << n << " coconuts, ";
          if (ans == -1){
               cout << "no solution\n";
          }else cout << ans  << " people and 1 monkey\n";
     }

	return 0;
}
