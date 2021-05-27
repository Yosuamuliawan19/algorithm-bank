#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<iomanip>

using namespace std;
int main (){
     int k, n, tmp;
     cin >> n >> k;
     vector<int> pref;
     int tot = 0;
     pref.push_back(0);
     for (int i=0;i<n;i++){
          cin >> tmp;
          tot += tmp;
          pref.push_back(tot);
     }
     double max = INT_MIN;
     // for (int i=0;i<n;i++){
     //      cout << pref[i] << " ";
     // }
     n++;
     // cout << endl;
     for (int i=0;i<n;i++){
          for (int j=i+k;j<n;j++){
               double s = ((double)pref[j] - pref[i])/ ((double)j-i);
               if (max < s){
                    max = s;
               }
          }
     }
     cout << fixed <<  setprecision(10) << max << endl;
     return 0;
}
