
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

int n, k;
void dp (int x, vector<int> v, string s){
     if (x == n){
          for (int i=0;i<n;i++){
               cout << v[i];
               if (i != n-1) cout <<" ";
          }
          cout << "\n";
     }
     for (int i=1;i<=n;i++){
          int j = i;
          if (x != 0)  j = v.back();
          if (abs(j-i) <= k && s[i-1] == '0'){
               s[i-1] = '1';
               v.push_back(i);
               dp(x+1, v, s);
               v.pop_back();
               s[i-1] = '0';
          }
     }

}

int main(int argc, char const *argv[])
{
     string s;
     cin >> n >> k;
     for (int i=0;i<n;i++) s += '0';
     dp (0,vector<int>(),s);

	return 0;
}
