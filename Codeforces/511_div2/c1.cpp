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
#include<stack>
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
int n, arr[20000000];

int main(int argc, char const *argv[])
{
     cin >> n >> arr[0];
     dv = arr[0];
     for (int i=1;i<n;i++){
          cin >> arr[i];
          dv = gcd(dv, arr[i]);
     }
     
	return 0;
}
