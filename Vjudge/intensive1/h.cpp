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
int n;
int main()
{
     cin >> n;
     for (int i=0;i<n;i++){
          for (int j=0;j<(2*n)+1;j++){
               if (j < n){
                    if (i == n-1 || (j == 0 || j == n-1)){
                         cout << "*";
                    }else{
                         cout << " ";
                    }
               }else if (j > n){
                    if (i == 0 || (j == n+1 || j == 2*n)){
                         cout << "*";
                    }else{
                         cout << " ";
                    }
               }else cout << " ";
          }
          cout << endl;
     }


	return 0;
}
