// #include<stdio.h>
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
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int tc;
int x[] = {11,10,10,5,10,15,20,10,7,11};
int f(int a, int b, int i, int j){
     int k = j, ct = 0;
     while (k > i-1){
          if (x[k] <= b && x[k] > a) ct ++;
          k--;
     }
     return ct;
}
int main()
{
	cout << f(8,18,3,6) << f(10,20,0,9) << f(8,18,6,3)
     << f(20,10,0,9) << f(6,7,8,8);

	return 0;
}
