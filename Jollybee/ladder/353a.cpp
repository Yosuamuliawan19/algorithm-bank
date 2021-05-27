// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
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

int main()
{
     int n, arr1[110], arr2[110];
     int a = 0, b = 0;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr1[i] >> arr2[i];
          a += arr1[i];;
          b += arr2[i];
     }
     if ((a+b)%2 != 0) {
          cout << "-1\n";
          return 0;
     }
     if (a%2 == 0 && b%2 == 0){
          cout << "0\n";
     }else{
          bool suc = 0;
          for (int i=0;i<n;i++){
               if (arr1[i]%2 != arr2[i]%2) suc = 1;
          }
          if (suc) cout << "1\n";
          else cout << "-1\n";
     }
     // cout << a <<" " <<  b << endl;
	return 0;
}
