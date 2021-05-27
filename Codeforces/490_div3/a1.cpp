#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
int main (){
     ll tc;
     ll n, m, a, b, tmp;
     cin >> tc;
     while (tc--){
          cin >> n >> m >> a >> b;
          ll cnt = 0;
          for (int i=0;i<n*m;i++){
               cin >> tmp;
               if (tmp < a || tmp > b){
                    cnt ++ ;
               }
          }
          if (a > b){
               cout << "No Solution\n";
          }else{
               cout << cnt << endl;
          }
     }
}
