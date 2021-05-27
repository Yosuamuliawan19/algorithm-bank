#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<queue>
typedef long long ll;
using namespace std;
int n; string s;
void modif(int x){
     int y = 0;
     while (x > y){
          char tmp = s[x];
          s[x] = s[y];
          s[y] = tmp;
          // cout << "swap " << s[x] << " " << s[y] << endl;
          x--;
          y++;
     }
}
int main (){
     queue<int> divs;
     cin >> n >> s;
     for (int i=1;i<=n;i++){
          if (n%i == 0){
               divs.push(i);
          }
     }
     while (!divs.empty()){
          modif(divs.front()-1);
          divs.pop();
     }
     cout << s << endl;
     return 0;
}
