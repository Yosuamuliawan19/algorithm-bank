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
const int sz = 10000000;
bool isPrime[sz];
vector<int> pl;
void sieve(){
     for (int i=0;i<sz;i++) isPrime[i] = 1;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               pl.push_back(i);
               for (int j=i*2;j<sz;j+=i) isPrime[j] = 0;
          }
     }
}
int main(int argc, char const *argv[])
{
     sieve();
     int n,k;
     cin >> n >> k;
     for (int i=0;i<n;i++){
          int cur = (i*k);
          cout << pl[cur] << endl;
     }

	return 0;
}
