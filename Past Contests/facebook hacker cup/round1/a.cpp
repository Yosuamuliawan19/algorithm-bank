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


void dp(int x, int y){
     if (x >= m) return;
     // cout << x << " " << y << endl;
     if (arr[y][x] == '#') return;
     if (x == m-1 && y == 1 && arr[y+1][x] == '.'){
          pos ++;
          pos %= dv;
          return;
     }
     if (y == 0){
          if (arr[y+1][x] == '#') return;
          dp(x+1,y+1);
     }else if (y == 2){
          if (arr[y-1][x] == '#') return;
          dp(x+1,y-1);
     }else{
          if (arr[y+1][x] != '#') {
               dp(x+1,y+1);
          }
          if (arr[y-1][x] != '#') {
               dp(x+1,y-1);
          }


     }
}
int main (){
     cin >> tc;
     while (tc--){
          cin >> m;
          arr.clear();
          pos = 0;
          for (int i=0;i<n;i++){
               cin >> s;
               arr.push_back(s);
          }
          dp(0,0);
          cout << "tc " << tc << ": ";
          cout << pos <<endl;
     }



     return 0;
}
