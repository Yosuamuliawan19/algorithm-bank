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

int check(int n, int s){
     return (s>=0) && (s <= n*9);
}
int main(int argc, char const *argv[])
{
     int n, s;
     cin >> n >> s;
     int sum = s;
     string minn = "";
     for (int i=0;i<n;i++){
          for (int j=0;j<10;j++){
               if (((i>0) || (j>0) || (n==1 &&j==0)) && check(n-i-1,s-j)){
                    // cout << i << " " << j << endl;
                    minn += (char)(j+48);
                    s -= j;
                    break;
               }
          }
     }
     // cout << minn << endl;
     s = sum;
     string maxx = "";
     for (int i=0;i<n;i++){
          for (int j=9;j>=0;j--){
               if (((i>0) || (j>0) || (n==1 &&j==0)) && check(n-i-1,s-j)){
                    // cout << i << " " << j << endl;
                    maxx += (char)(j+48);
                    s -= j;
                    break;
               }
          }
     }
     // cout << maxx << endl;
     if (minn == "" || minn.length() < n ) minn = "-1";
     if (maxx == "" || maxx.length() < n) maxx = "-1";
     cout << minn << " " << maxx << endl;
	return 0;
}
