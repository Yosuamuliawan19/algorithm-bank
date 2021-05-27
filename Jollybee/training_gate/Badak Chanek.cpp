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
     int n, q, tmp;
     scanf("%d %d" ,&n, &q);
     int arr[1001];
     for (int i=0;i<n;i++) scanf("%d", &arr[i]);
     sort(arr, arr+n);
     for (int i=0;i<q;i++){
          scanf("%d", &tmp);
          printf("%d\n", arr[tmp-1]);
     }

	return 0;
}
