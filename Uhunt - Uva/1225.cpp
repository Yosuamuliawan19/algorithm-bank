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
	int tc,n;
	cin >> tc;
     while (tc--){
          int arr[10] = {0};
          cin >> n;
          for (int i=1;i<=n;i++){
               int x = i;
               while (x != 0){
                    arr[x%10] ++;
                    x /= 10;
               }
          }
          for (int i=0;i<10;i++){
               if (i!=0) cout << " ";
               cout << arr[i];
          }
          cout << endl;
     }
	return 0;
}
