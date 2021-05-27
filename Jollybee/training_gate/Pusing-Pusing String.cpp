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
int n,q;
string s;
int x,a,b;

void swap(int a, int b){
     char tmp = s[a];
     s[a] = s[b];
     s[b] = tmp;
}
void reverse(int a, int b){
     int idx = b;
     for (int i=a;i<idx;i++){
          swap(i,idx);
          idx--;
     }
}
int main(int argc, char const *argv[])
{

     cin >> n >> q;
     cin >> s;
     while(q--){
          cin >> x >> a >> b;
          if (x == 1){
               swap(a-1,b-1);
          }else{
               reverse(a-1,b-1);
          }
          // cout << s << endl;
     }
     cout << s << endl;
	return 0;
}
