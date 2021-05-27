#include<iostream>
#include<string>
using namespace std;
int main (){
     string a,b;
     int x,y,p,q;
     cin >> a >> b;
     x = a.length()-1;
     y = b.length()-1;

     while (true){
          if (a[x] == b[y]){
               x--; y--;
               if (x == -1 || y == -1) break;
          }else{
               break;
          }

     }

     // cout << x <<" " << y << endl;
     cout << (x+1) + (y+1) << endl;


     return 0;
}
