#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int main (){
     int tc; cin >> tc;
     for (int t=0;t<tc;t++){
          int lim; string s;
          cin >> lim >> s;
          vector<int> nums;
          int tally = 0;
          for(int i=0;i<s.length();i++){
               if (s[i] == 'C'){
                    tally++;
               }else{
                    nums.push_back(tally);
                    tally = 0;
               }
          }
          // cout << "nums \n";
          // for (int i=0;i<nums.size();i++){
          //      cout << nums[i] << " ";
          // }
          // cout << "\n";
          int point = nums.size() - 1, maxpoint = point;
          int count = 0;
          cout << "Case #" << t +1 << ": ";
          while (1){
               // cout << "sum = " ;
               int ex = 0, sum = 0;
               for (int i=0;i<nums.size();i++){
                    ex += nums[i];
                    sum += pow(2,ex);
               }
               // cout << sum << endl;
               // cout << "\n";
               if (sum <= lim){
                    cout << count<<endl;
                    break;
               }

               if (nums[point] != 0){
                    count ++;
                    nums[point] --;
                    if (point != maxpoint){
                         nums[point+1] ++;
                         point++;
                    }
               }else{
                    point --;
                    if (point < 0) {
                         cout << "IMPOSSIBLE\n";
                         break;
                    }
               }
               // for (int i=0;i<nums.size();i++){
               //      cout << nums[i] << " ";
               // }
               // cout << "\n";

          }

     }
}
