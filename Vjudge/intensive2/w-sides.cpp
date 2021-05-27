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

int main()
{
     int arr[6], arr2[6];
     double w = 0, l = 0;
     for (int i=0;i<6;i++) cin >> arr[i];
     for (int i=0;i<6;i++){
          cin >> arr2[i];
          for (int j=0;j<6;j++){
               if (arr2[i] > arr[j]){
                    l ++;
               }else if (arr2[i] < arr[j]){
                    w++;
               }
          }
     }

     cout << setprecision(5) << fixed << w/(w+l) << endl;

	return 0;
}
