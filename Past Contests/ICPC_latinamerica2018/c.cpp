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



int main(int argc, char const *argv[])
{
	int k, n, tmp;
     cin >> k >> n;
     int arr[1010] = {0};
     for (int i=0;i<n;i++){
          cin >> tmp;
          arr[tmp]++;
     }
     if (n%k != 0 && (n+1)%k != 0 && (n-1)%k != 0){
          cout << "*\n"; return 0;
     }
     bool stop = 0;
     if (n%k == 0){
          int dv = n / k;
          int x, y, cnt1 = 0, cnt2 = 0;
          for (int i=1;i<=k;i++){
               if (arr[i] > dv){
                    x = i; cnt1 ++;
                    if (arr[i] != dv+1) cnt1 = 1000;
               }else if (arr[i] < dv){
                    y = i; cnt2 ++;
                    if (arr[i] != dv-1) cnt2 = 1000;
               }
          }
          // kalo + 1 and - 1
          if (cnt1 == 1 && cnt2 == 1){
               cout <<  "-" << x << " +" << y << endl;
               stop = 1;
          }
     }
     if (stop) return 0;
     if ((n+1)%k == 0){
          int dv = (n+1)/k;
          int x , cnt = 0;
          for (int i=1;i<=k;i++){
               if (arr[i] < dv){
                    x = i; cnt ++;
                    if (arr[i] != dv-1) cnt = 1000;
               }
          }
          if (cnt == 1){
               cout << "+"<< x << endl;
               stop = 1;
          }
     }
     if (stop) return 0;
     if ((n-1)%k == 0){
          int dv = (n-1)/k;
          int x , cnt = 0;
          for (int i=1;i<=k;i++){
               if (arr[i] > dv){
                    x = i; cnt ++;
                    if (arr[i] != dv+1) cnt = 1000;
               }
          }
          if (cnt == 1){
               cout << "-"<< x << endl;
               stop = 1;
          }
     }
     if (stop) return 0;
     cout << "*\n";

	return 0;
}
