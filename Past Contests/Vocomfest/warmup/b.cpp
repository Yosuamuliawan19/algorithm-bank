#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main (){
     int n , s ;
     cin >> n >> s;
     int arr[10001] = {0};
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     sort(arr,arr+n);
     int l =0, r=n-1;
     vector<int> res;
     vector<int> dump;

     res.push_back(arr[r]);
     r--;
     int cur = 0;
     bool flag = true, stop = false;
     while (1){
          // if (arr[cur] + arr[l] > s){
          //      res.push_back(l);
          // }else{
          //      for (int i=l;i<n;i++){
          //           if (arr[])
          //      }
          // }
          if (flag){
               cout << "mode left " << endl;
               for (int i=l;i<n;i++){
                    cout << "traversing " << arr[i] << endl;
                    cout << "size  " << arr[i] + res[cur] << endl;
                    if (i >= r){
                         stop = true;
                         break;
                    }
                    if (arr[i] + res[cur] > s){
                         res.push_back(arr[i]);
                         arr[i] = -1;
                         l = i;
                         break;
                    }
               }
          }else{
               cout << "mode right " << endl;

               for (int i=r;i>=0;i--){
                    cout << "traversing " << arr[i] << endl;
                    cout << "size  " << arr[i] + res[cur] << endl;
                    if (l >= i){
                         stop = true;
                         break;
                    }
                    if (res[i] + res[cur] > s){
                         res.push_back(arr[i]);
                         arr[i] = -1;
                         r = i;
                         break;
                    }
               }
          }
          if (stop) break;
          cur ++;
          flag = !flag;

     }
     for (int i=0;i<res.size();i++){
          cout << res[i] << endl;
     }

     return 0;
}
