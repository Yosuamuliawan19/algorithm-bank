#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<map>

typedef long long ll;
using namespace std;
int main (){
     ll x, k;
     cin >> x >> k;
     for (ll i=0;i<k;i++){
          x = (x*2)%(10e9 + 7);
     }

     return 0;
}
