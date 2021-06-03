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
int tc,n,arr[60];
bool vis[60];
int gcd(int a, int b){
     if (a == b) return a;
     if (a > b) return gcd(a-b,b);
     else return gcd(a,b-a);
}
int plist[6] = {29, 31, 37, 41, 43, 47};
int main()
{
	scanf("%d",&tc);
     while (tc--){
          scanf("%d",&n);
          bool suc = false;
          for (int i=0;i<60;i++) vis[i] = 0;
          for (int i=0;i<n;i++){
               scanf("%d",&arr[i]);
               cout << i << "-" << arr[i] << endl;
               vis[arr[i]] = 1;
               for (int j=0;j<i;j++){
                    if (gcd(arr[i], arr[j]) == 1){
                         suc = true;
                         break;
                    }
               }
          }
          if (suc) {
               printf("0\n");
               for (int i=0;i<n;i++){
                    if (i != 0) printf(" ");
                    printf("%d",arr[i]);
               }printf("\n");
          }else{
               printf("1\n");
               int change = -1;
               for (int i=0;i<6;i++){
                    if (!vis[plist[i]]){
                         change = plist[i];
                         break;
                    }
               }
               printf("%d",change);
               for (int i=1;i<n;i++){
                    printf(" %d", arr[i]);
               }
               printf("\n");
               continue;
          }



     }
	return 0;
}
