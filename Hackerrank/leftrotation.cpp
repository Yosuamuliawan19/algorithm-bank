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
     int n, d, arr[100010];
     cin >> n >> d;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     for (int i=0;i<n;i++){
          if (i!=0) cout << " "; 
          int j = (i+d)%n;
          cout << arr[j];
     }cout << endl;


	return 0;
}
