#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int main (){
     int tc; cin >> tc;
     int tally = 0;
     for (int t=1;t<=tc;t++){
          int lim; string s;
          vector<int> thing;
          int tally = 0;
          cin >> lim >> s;
          for (int i=0;i<s.length();i++){
               if (s[i] == 'c'){
                    tally++;
               }else{
                    thing.push_back(tally);
                    tally = 0;
               }
          }
          for (int i=0;i<thing.size();i++){
               cout << thing[i] << " ";
          }
          int point = thing.size()-1, maxpoint = point;
          while (1){
               if (point < 0 ) break;
               thing[point] --;
               if (point != maxpoint)
               thing[point+1] ++;
               if (thing[point] == 0){
                    point --;
               }else if (point != maxpoint){
                    point ++;
               }

               int ex = 0, sum = 0 ;
               for (int i=0;i<thing.size();i++){
                    ex += thing[i];
                    sum += pow(2,ex);
               }
               cout << "sum = " << sum << endl;
               for (int i=0;i<thing.size();i++){
                    cout << thing[i]<<  " ";
               }
               cout << "\n";

          }

     }
     return 0;
}
