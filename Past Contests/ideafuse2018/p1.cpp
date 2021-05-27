#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
#include<math.h>
#include<iomanip>
typedef long long ll;
typedef long double ld;
using namespace std;

int main (){
     ll x, tmp, tot = 0;
     cin >> x;
     vector<ll> v;
     for (int t=0;t<x;t++){
          cin >> tmp;
          v.push_back(tmp);
          tot += tmp;
     }
     sort(v.begin(),v.end());
     cout << tot - v[0] << endl;

     return 0;
}
