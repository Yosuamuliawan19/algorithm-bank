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
#include<queue>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
     map<int,int> m ;
     int n;
     vector<int> order;
     while (cin >> n ){
          if (m.find(n) == m.end()) order.push_back(n);
          m[n] ++;
     }
     for (int i=0;i<order.size();i++){
          cout << order[i] << " " << m[order[i]] << endl;
     }



     return 0;
}
