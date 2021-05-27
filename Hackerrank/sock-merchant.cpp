#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int n, arr[110] = {0}, cur;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> cur;
          arr[cur] ++;
     }
     int ans = 0;
     for (int i=0;i<110;i++){
          ans += floor(arr[i]/2);
     }
     cout << ans << endl;
}
