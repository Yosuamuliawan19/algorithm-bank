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

     int tc, arr[12],n;
     cout <<"hey\n";
     cin >> tc ;
     for (int t=1;t<=tc;t++){
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr,arr+n);
          cout << "Case " << t <<": " << arr[n/2] << endl;
     }

	return 0;
}
