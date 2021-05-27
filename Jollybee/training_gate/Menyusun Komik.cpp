#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>
#include <string.h>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;


int main(int argc, char const *argv[])
{

     int n, cnt = 0, arr[1010];
     cin >> n;
     for (int i=0;i<n;i++) cin >> arr[i];
     for (int i=0;i<n;i++){
          for (int j=i+1;j<n;j++){
               if (arr[i] > arr[j]){
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                    cnt ++;
                    break;
               }
          }
     }
     cout << cnt << endl;

     return 0;
}
