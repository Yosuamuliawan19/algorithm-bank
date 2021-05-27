#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main (){
     int n,m,q;
     int a,b,c,d;
     bool arr[600][600];
     while (cin >> n >> m >> q){
          if (!n && !m && !q) break;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    arr[i][j] = 0;
               }
          }
          for (int k=0;k<q;k++){
               cin >> a >> b >> c >> d;
               if (a > c){
                    int tmp = a; a = c; c= tmp;
               }
               if (b > d){
                    int tmp = b; b = d; d = tmp;
               }
               for (int i=a-1;i<c;i++){
                    for (int j=b-1;j<d;j++){
                         arr[i][j] = 1;
                    }
               }
          }
          ll cnt = 0;
          for (int i=0;i<n;i++)
               for (int j=0;j<m;j++) if (!arr[i][j]) cnt ++;
          if (cnt == 0){
               cout << "There is no empty spots.\n";
          }else if (cnt == 1){
               cout << "There is one empty spot.\n";
          }else{
               cout << "There are " << cnt << " empty spots.\n";
          }
     }




     return 0;
}
