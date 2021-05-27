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
     set<int> x,y;
	int n,a,b;
     cin >> n;
     while (n--) {
          cin >> a >> b;
          x.insert(a); y.insert(b);
     }
     if (x.size() != 2 || y.size() != 2){
          cout << -1 << endl;
     }else{
          cout << abs(*x.rbegin()-*x.begin()) * abs(*y.rbegin()-*y.begin()) << endl;
     }

	return 0;
}
