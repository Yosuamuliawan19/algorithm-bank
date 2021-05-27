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

int n, k, a, b;
int parent[1000010] = {0};
int findParent(int a){
     return parent[a] == a ? a : parent[a] = findParent(parent[a]);
}
bool sameSet(int a, int b){
     return findParent(a) == findParent(b);
}
void unify(int a, int b){
     a = findParent(a);
     b = findParent(b);
     if (a < b){
          parent[a] = b;
     }else{
          parent[b] = a;
     }
}
int main(int argc, char const *argv[])
{
     scanf("%d%d",&n,&k);
     for (int i=0;i<n;i++) parent[i] = i;
     for (int i=0;i<k;i++){
          scanf("%d%d",&a,&b);
          if (!sameSet(a,b)){
               unify(a,b);
          }
     }
     bool ans = 1;
     for (int i=1;i<=n/2;i++){
          ans = ans && sameSet(i, n-i+1);
          // cout << sameSet(i, n-i+1) << " " << i << " " << n-i+1<< endl;
     }
     if (ans){
          cout << "Yes\n";
     }else{
          cout << "No\n";
     }


	return 0;
}
