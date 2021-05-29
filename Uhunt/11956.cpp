#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
     int tc;
     cin >> tc;
     for (int t=1;t<=tc;t++){
          vector<int> arr(100,0);
          int idx = 0;
          string inp;
          getline(cin,inp);
          for (int i=0;i<inp.length();i++){
               if (inp[i] == '+'){
                    arr[idx]++;
                    if (arr[idx] > 255){
                         arr[idx] = 0;
                    }
               }else if (inp[i] == '-'){
                    arr[idx]--;
                    if (arr[idx] < 0){
                         arr[idx] = 255;
                    }
               }else if (inp[i] == '>'){
                    idx++;
                    if (idx > 99){
                         idx = 0;
                    }
               }else if (inp[i] == '<'){
                    idx--;
                    if (idx < 0){
                         idx = 99;
                    }
               }
          }
          cout << "Case " << t << ":";
          for (int i=0;i<100;i++){
               printf(" %02X", arr[i]);
          }
          cout << endl;
     }



     return 0;
}
