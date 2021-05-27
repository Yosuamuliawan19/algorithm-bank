#include<iostream>
#include<string>
using namespace std;
int main (){
     long long arr[26] = {0};
     string s; cin >> s;
     long long l = s.length();
     for (int i=0;i<l;i++){
          arr[s[i] - 97] ++;
     }

     // cout << "l : " << l << endl;
     long long max = -1, maxidx = -1;
     for (long long i=0;i<26;i++){
          if (arr[i] > max){
               max = arr[i];
               maxidx = i;
          }
     }
     // cout << "max : " << max << endl;
     long long max2 = -1;
     for (int i=0;i<26;i++){
          if (arr[i] > max2 && i != maxidx){
               max2 = arr[i];
          }
     }
     // cout << "max2 : " << max2 << endl;
     cout << l - max - max2 << "\n";

}
