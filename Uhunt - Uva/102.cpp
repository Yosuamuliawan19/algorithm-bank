#include<iostream>
#include<climits>

using namespace std;
int main (){
     int arr[9];
     while (cin >> arr[0]){
          for (int i=1;i<9;i++){
               cin >> arr[i];
          }
          string move[6];

          move[0] = "057";
          move[1] = "048";
          move[2] = "237";
          move[3] = "246";
          move[4] = "138";
          move[5] = "156";

          int min = INT_MAX;
          int ans;
          string tmp[6] = { "BCG","BGC","CBG", "CGB",  "GBC","GCB"};
          for (int i=0;i<6;i++){
               int idx = 0;
               int cur = 0;
               for (int j=0;j<9;j++){
                    if (j == ((int) move[i][idx]) - 48){
                         idx++;
                         continue;
                    }
                    cur += arr[j];
               }
               if (cur < min){
                    min = cur;
                    ans = i;
               }
          }
          cout << tmp[ans] << " " << min << endl;
     }

     return 0;
}
