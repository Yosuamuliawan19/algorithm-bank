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
     int n, k;
     cin >> n >> k;
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               if (j != 0) cout << " " ;
               if (i == j){
                    cout << (k/n) + (k%n);
               }else{
                    cout << (k/n);
               }
          }
          cout << endl;
     }
	return 0;
}
