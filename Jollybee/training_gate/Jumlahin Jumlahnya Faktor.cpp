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
#include <string.h>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int g(int x){
     int ret = 0;
     for (int i=1;i<=sqrt(x);i++){
          if (x % i == 0){
               if (x/i == i) ret++;
               else ret += 2;
          }
     }
     return ret;
}
int h(int x){
     ll tot =0;
     for (int i=1;i<=x;i++){
          tot += g(i);
          // cout << i << " " << g(i) << endl;
     }
     return tot;
}
int main(int argc, char const *argv[])
{
     int n;
     cin >> n;
     cout << h(n) << endl;
	return 0;
}
