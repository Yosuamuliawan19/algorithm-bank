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
	int n;
     double arr[1010];
     double d;
     while (cin >> n){
          if (!n) break;

          ll sum = 0;
          for (int i=0;i<n;i++){
               scanf("%lf", &d);
               arr[i] = 100 *(d+ 0.5);
               sum += arr[i];
          }
          double avg = sum/ n;
          double tot = 0, tot2 = 0;
          for (int i=0;i<n;i++){
               if (arr[i] > avg+1) {
                    tot += arr[i]-avg-1;
               }
               if (arr[i] < avg){
                    tot2 += avg-arr[i];
               }
          }
          tot = max(tot, tot2)/ 100.0;
          cout << "$" <<  fixed << setprecision(2) << tot << endl;
     }

	return 0;
}
