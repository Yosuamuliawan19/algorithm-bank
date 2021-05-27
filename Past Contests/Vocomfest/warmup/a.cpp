#include<iostream>
#include<string>


#include<math.h>

using namespace std;
int main(){
     int tc;
     cin >> tc;
     int temp;
     int arr[4]  = {256, 16, 1};


     while (tc--){

          cin >> temp;
          string ans = "";
          for (int i=0;i<3;i++){
               if (temp / arr[i] >  0){
                    int res = (int ) (temp / arr[i]);
                    cout << "res " << res << " arr "   << arr[i]<< endl;
                    if (res <= 16){
                         cout <<" im here" << endl;
                         if (res >= 10){
                              cout << "asdasdas " << (char)(res + 97 - 10)<< endl;
                              ans += to_string((char)(res + 97 -10));
                         }
                         else{
                              cout <<"not 10" << endl;
                              ans += to_string((char) res) ;
                         }
                         temp -= (arr[i] * res);
                         cout << res << " " <<  ans << endl;
                    }else{
                         temp -= (16 * arr[i]);
                         ans += "f";
                    }


               }else{
                    continue;
               }
          }
     }


     return 0;
}
