#include<iostream>
#include<cmath>
#include<vector>

#include<algorithm>

using namespace std;
double n;
vector<double> arr;
double cal(){
     double tot = 0;
     for (int i=0;i<n;i++){
          tot += arr[i];
     }
     tot = (double) tot / (double) n;
     return tot;
}
int main (){
     cin >> n;
     arr = vector<double> (n);
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     sort(arr.begin(), arr.end());
     int cnt = 0;
     for (int i=0;i<n;i++){
          // cout << cal() << endl;
          if (cal() >= 4.5){
               break;
          }else{
               arr[i] = 5;
               cnt ++;
          }
     }
     cout << cnt << endl;
     return 0;
}
