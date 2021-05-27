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
int iter = 0;
bool f = 0;
int arr[9] = {4,16,37,58,89,145,42,20,4};
int cnt = 0;
void rec(int n){
     // iter++;if(iter==100)return;
     if (n == 1) {
          f = 1;
          return;
     }
     if (n == arr[cnt]) cnt++;
     else cnt = 0;

     if (cnt == 9){
          f = 0;
          return;
     }

     ll sum = 0;
     while (n!=0){
          sum += (n%10) * (n%10);
          n /= 10;
     }
     rec(sum);
}

int main(int argc, char const *argv[])
{
	int n;
     cin >> n;
     rec(n);
     if (f) cout << "HAPPY\n";
     else cout << "UNHAPPY\n";

	return 0;
}
