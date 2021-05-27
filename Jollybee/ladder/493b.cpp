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
vector<ll> f,s;
ll last = 1;
bool comp(){
     for (ll i=0;i<min(f.size(), s.size());i++){
          if (f[i] > s[i]){
               return 1;
          }else if (f[i] < s[i]){
               return 0;
          }
     }
     if (f.size() > s.size()) return 1;
     else if (f.size() < s.size()) return 0;

     if (last == 1) return 1;
     else return 0;
}

int main(int argc, char const *argv[])
{
	ll n,tmp;
     ll a = 0, b = 0;
     cin >> n;
     while (n--){
          cin >> tmp;
          if (tmp > 0){
               f.pb(tmp);
               a+=tmp;
               last = 1;
          }
          else {
               s.pb(-tmp);
               b+=(-tmp);
               last = -1;
          }
     }
     if (a > b){
          cout << "first\n";
     }else if (a < b){
          cout << "second\n";
     }else{
          if (comp()){
               cout << "first\n";
          }else{
               cout << "second\n";
          }
     }
	return 0;
}
