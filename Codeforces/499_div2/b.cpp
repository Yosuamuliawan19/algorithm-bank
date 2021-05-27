#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
int main (){
     int n, m, tmp;
     cin >> n >> m;
     int arr[101] = {0};
     for (int i=0;i<m;i++){
          cin >> tmp;
          arr[tmp]++;
     }
     for (int d=m;d>0;d--){
          int tot = 0;
          for (int i=0;i<101;i++){
               tot += (int)( arr[i]/d);
          }
          if (tot >= n){
               cout << d << endl;
               return 0;
               break;
          }
     }
     cout << 0 << endl;



     return 0;
}
