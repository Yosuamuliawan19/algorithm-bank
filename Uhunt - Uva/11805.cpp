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
	int tc,n,k,p;
	cin >> tc;
     int t =  1;
     while (tc--){
          cin >> n >> k >> p;
          k+=p;
          if (k%n == 0) k = n;
          else k = k%n;
          cout << "Case " << t ++ << ": " << k << endl;
     }
	return 0;
}
