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
int arr[3][2];
void swap(int *p,int *q)
{
     int tmp;
    tmp = *p;
    *p=*q;
    *q=tmp;
}
int main()
{
	for (int i=0;i<3;i++){
          for (int j=0;j<2;j++){
               cin >> arr[i][j];
          }
     }
     bool found = 0;
     for (int i=0;i<2;i++){
          for (int j=0;j<2;j++){
               for (int k=0;k<2;k++){
                    int a = arr[0][i] + arr[1][j] + arr[2][k];
                    int b = arr[0][(i+1)%2] + arr[1][(j+1)%2] + arr[2][(k+1)%2];
                    if (a == b){
                         found = 1;
                         break;
                    }
                    int a1 = arr[0][i], a2 = arr[0][(i+1)%2];
                    int b1 = arr[1][j], b2 = arr[1][(j+1)%2];
                    int c1 = arr[2][k], c2 = arr[2][(k+1)%2];

                    if (a1+b1 == a1+c1 == b2+c2 == a2) found = 1;
                    swap(a1,b1);
                    swap(a2,b2);
                    if (a1+b1 == a1+c1 == b2+c2 == a2) found = 1;
                    swap(a1,b1);
                    swap(a2,b2);
                    swap(a1,c1);
                    swap(a2,c2);
                    if (a1+b1 == a1+c1 == b2+c2 == a2) found = 1;
                    swap(a1,c1);
                    swap(a2,c2);
                    swap(b1,c1);
                    swap(b2,c2);
                    if (a1+b1 == a1+c1 == b2+c2 == a2) found = 1;



               }
          }
     }
     if (found)cout<< "YES\n";
     else cout << "NO\n";

	return 0;
}
