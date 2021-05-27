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
ll n, lim;
int main()
{
     scanf("%lld %lld",&n,&lim);
     int val = n*(n-1);
     int arr[10][20];
     for (int i=0;i<n;i++){
          ++val;
          for (int j=0;j<n;j++)
               arr[j][i] = val;
     }
     int perm = 0;
     int mod = (n*(n-1));

     int arridx = 0;
     do{
          for (int k=0;k<mod;k++){
               if (perm >= lim) return 0;
               int idx = 0, cnt = k;
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         if (j == 0 && i != n-1){
                              printf("%d",  arr[arridx][idx++]);
                         }else if (i == n-1 && j == 1){
                              printf("%d",  arr[arridx][idx++]);
                         }else{
                              printf("%d" , (cnt % mod) +1);
                              cnt++;
                         }
                         if (j!=n-1) printf(" ");
                    }
                    printf("\n");
               }
               // cout << idx << endl;
               perm ++;
          }
     }while (next_permutation(arr[arridx], arr[arridx]+n));
     arridx ++;
     do{
          for (int k=0;k<mod;k++){
               if (perm >= lim) return 0;
               int idx = 0, cnt = k;
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         if (j == 0 && i != n-2){
                              printf("%d",  arr[arridx][idx++]);
                         }else if (i == n-2 && j == 1){
                              printf("%d",  arr[arridx][idx++]);
                         }else{
                              printf("%d" , (cnt % mod) +1);
                              cnt++;
                         }
                         if (j!=n-1) printf(" ");
                    }
                    printf("\n");
               }
               perm ++;
          }
     }while (next_permutation(arr[arridx], arr[arridx]+n));
     arridx ++;
     do{
          for (int k=0;k<mod;k++){
               if (perm >= lim) return 0;
               int idx = 0, cnt = k;
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         if (j == 0 && i != n-3){
                              printf("%d",  arr[arridx][idx++]);
                         }else if (i == n-3 && j == 1){
                              printf("%d",  arr[arridx][idx++]);
                         }else{
                              printf("%d" , (cnt % mod) +1);
                              cnt++;
                         }
                         if (j!=n-1)  printf(" ");
                    }
                    printf("\n");
               }
               perm ++;
          }
     }while (next_permutation(arr[arridx], arr[arridx]+n));
     arridx ++;
     do{
          for (int k=0;k<mod;k++){
               if (perm >= lim) return 0;
               int idx = 0, cnt = k;
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         if (j == 0 && i != n-4){
                              printf("%d",  arr[arridx][idx++]);
                         }else if (i == n-4 && j == 1){
                              printf("%d",  arr[arridx][idx++]);
                         }else{
                              printf("%d" , (cnt % mod) +1);
                              cnt++;
                         }
                         if (j!=n-1)  printf(" ");
                    }
                    printf("\n");
               }
               perm ++;
          }
     }while (next_permutation(arr[arridx], arr[arridx]+n));
     arridx ++;
     do{
          for (int k=0;k<mod;k++){
               if (perm >= lim) return 0;
               int idx = 0, cnt = k;
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         if (j == 0 && i != n-5){
                              printf("%d",  arr[arridx][idx++]);
                         }else if (i == n-5 && j == 1){
                              printf("%d",  arr[arridx][idx++]);
                         }else{
                              printf("%d" , (cnt % mod) +1);
                              cnt++;
                         }
                         if (j!=n-1) printf(" ");
                    }
                    printf("\n");
               }
               perm ++;
          }
     }while (next_permutation(arr[arridx], arr[arridx]+n));
     arridx ++;



	return 0;
}
