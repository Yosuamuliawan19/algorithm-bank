#include<iostream>
#include<vector>
#include<map>

typedef long long ll;
using namespace std;
int pos = 0;
ll dv = 1000000007;
vector<string> arr;
ll tc,n=3,m;
string s;
bool suc = 0;
void dp(int x, int y){
     if (x >= m) return;
     if (arr[y][x] == '#') return;
     if (x == m-1 && y == 1){
          suc = 1;
     }
     if (y == 1){
          bool flag = 1;
          if (x+2 < m){
               for (int i=x;i<x+2;i++){
                    for (int j=0;j<=2;j++){
                         if (arr[j][i] == '#'){
                              flag = 0; break;
                         }
                    }
               }
          }else{
               flag = 0;
          }

          if (flag){
               pos*=2;
               pos%=1000000007;
               dp(x+2,y);
          }else{
               if (arr[y+1][x] != '#'){
                    dp(x+1,y+1);
               }
               if (arr[y-1][x] != '#'){
                    dp(x+1,y-1);
               }
          }
     }else if (y == 0){
          if (arr[y+1][x] != '#'){
               dp(x+1,y+1);
          }
     }else{
          if (arr[y-1][x] != '#'){
               dp(x+1,y-1);
          }
     }
}
int main (){
     cin >> tc;
     int t = 1;
     while (tc--){
          cin >> m;
          arr.clear();
          pos = 1; suc = 0;
          for (int i=0;i<n;i++){
               cin >> s;
               arr.push_back(s);
          }
          dp(0,0);
          cout << "Case #" << t++ << ": ";
          if (suc)
          cout <<  pos <<endl;
          else
          cout << 0 << endl;
     }



     return 0;
}
