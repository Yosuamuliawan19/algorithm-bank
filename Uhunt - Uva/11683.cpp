#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
     int a,c;
     while (cin >> a){
          if (a == 0) break;
          cin >> c;
          vector<int> arr(c, 0);
          for (int i=0;i<c;i++){
               cin >> arr[i];
          }
          int cnt = 0;
          int prev;
          for (int i=0;i<c;i++){
               if (i == 0){
                    cnt = a - arr[i];
                    prev = arr[i];
               }else{
                    if (arr[i] < prev){
                         cnt += (prev - arr[i]);
                    }
               }
               prev = arr[i];
          }
          cout << cnt << endl;
     }



     return 0;
}
