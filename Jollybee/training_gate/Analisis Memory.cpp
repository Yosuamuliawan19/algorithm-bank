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
int rec(int x){
     if (x > 1){
          return (1 + rec(x/2) + rec(x/2));
     }else{
          return 1;
     }
}

int main(int argc, char const *argv[])
{
     int n; cin >> n;
     cout << rec(n) << endl;


	return 0;
}
