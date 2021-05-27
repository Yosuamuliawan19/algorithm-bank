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
ll n, arr[1100], tmp;
int main()
{
	cin >> n;
     for (int i=0;i<n;i++){
          cin >> tmp;
          arr[i] = tmp*2;
     }
     sort(arr,arr+n);
     int l = 0, r = n-1;
     int cnt =0 ;
     while (r > l){
          while (arr[l] == 0) l ++;
          while (arr[r] == 0) r --;

          



     }

     cout << cnt << endl;
	return 0;
}
