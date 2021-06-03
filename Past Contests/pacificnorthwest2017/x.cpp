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
int n;
void test(int x, int y){
     if (x == 1 && y == 1) return;
     if (n % (x+y) != 0 && (n-x) % (x+y)) return;
     cout << x << "," << y << endl;
}
int main(int argc, char const *argv[])
{

     cin >> n;
     cout << n << ":\n";
     for (int i=2;i<n;i++){
          test(i-1,i-1);
          test(i,i-1);
     }

	return 0;
}
