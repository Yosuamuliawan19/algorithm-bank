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
int n, q;
int arr[25][60] = {0};
string input;
int len;
bool f = 0;
int vis[60] = {0};
void dp(int idx){
     // cout << input[idx] << endl;
     if (f) return;
     if (idx == len){
          f = 1;
          return;
     }
     int now = input[idx]-'A';
     for (int i=0;i<n;i++){
          if (f) return;
          if (!vis[i] && arr[now][i]){
               vis[i] = 1;
               dp (idx + 1);
               vis[i] = 0;
          }
     }
}
int main()
{
	scanf("%d%d\n",&n,&q);
     for (int i=0;i<n;i++){
          getline(cin, input);
          for (int j=0;j<input.length();j++){
               if (input[j] >= 'A' &&  input[j] <= 'Z'){
                    arr[input[j]-'A'][i] = 1;
                    // cout << input[j] << " " << i << endl;
               }
          }
     }
     for (int i=0;i<q;i++){
          getline(cin, input);
          len = input.length();
          if (len > n){
               printf("NO\n");
               continue;
          }
          f = 0;
          dp(0);
          if (f){
               printf("YES\n");
          }else{
               printf("NO\n");
          }
     }

	return 0;
}
