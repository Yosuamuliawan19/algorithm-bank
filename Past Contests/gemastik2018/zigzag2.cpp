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
int tc, n;
int main()
{
	scanf("%d",&tc);
     while (tc--){
          scanf("%d",&n);
          int arr[1010], tot = 0;
          for (int i=0;i<n;i++){
               scanf("%d",&arr[i]);
          }
          for (int i=0;i<n;i++){
               int x =i, y =i;
               int a=0,b=0,c=0,d=0;
               while (x > 0){
                    x--;
                    if (arr[x] > arr[i]){
                         a++;
                    }else if (arr[x] < arr[i]){
                         b++;
                    }
               }
               while (y < n-1){
                    y++;
                    if (arr[y] > arr[i]){
                         c++;
                    }else if (arr[y] < arr[i]){
                         d++;
                    }
               }
               tot += (a*c) + (b*d);
          }
          printf("%d\n",tot);
     }

	return 0;
}
