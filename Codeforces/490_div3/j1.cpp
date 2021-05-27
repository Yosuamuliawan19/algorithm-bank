#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
int main (){
     string a, b;
     ll tc;
     cin >> tc;
     while (tc--){
          cin >> a >> b;
          if (b[0] >= 97) b[0] -=32;
          cout << b + a << endl;
     }
}
