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

// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const int sz = 100000;
bool isPrime[sz];
void sieve(){
     FOR(i,0,sz) isPrime[i] = 1;
     isPrime[0] = 0;
     isPrime[1] = 1;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               for (int j=i*2;j<sz;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
}


int main(int argc, char const *argv[])
{
     sieve();
     string s;
     int tot = 0;
     while (cin >> s){
          tot = 0;
          for (int i=0;i<s.length();i++){
               if (s[i] >= 'a' && s[i] <= 'z'){
                    tot += (s[i]-'a'+1);
               }else{
                    tot += (s[i]-'A'+27);
               }
          }
          if (isPrime[tot]){
               cout << "It is a prime word.\n";
          }else{
               cout << "It is not a prime word.\n";
          }
     }

	return 0;
}
