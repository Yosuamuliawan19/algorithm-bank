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
#include<sstream>
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
          int val = n, i = 0;
          int x, y;
          while (val > i){
               val -= i;
               i++;
          }
          if (i%2){
               x = i - val + 1;
          }else{
               x = val;
          }
          y = i - x + 1;
          // cout << i << endl;
          printf("TERM %d IS %d/%d\n", n, x, y);
     }

	return 0;
}
