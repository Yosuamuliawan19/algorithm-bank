#include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<long long, long long> pll;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOR(a,b) for(int i=a;i<b;i++)

int main (){
     int tc; string n; scanf("%d", &tc);

     for (int t=1;t<=tc;t++){
          cin >> n;
          int b = 0, dot = 0;
          for (int i=1;i<n.length();i++){
               if (n[i] == '.') dot++;
               else b++;
          }
          printf("Case #%d: %c\n", t, (b > 0 && dot > 0 && b >= dot) ? 'Y' : 'N' );
     }
}
