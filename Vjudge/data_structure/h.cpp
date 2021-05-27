#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
     int n, idx = 0; string a, s[10100];
     cin >> n;
     while (n--){
          // cout << "----\n";
          cin >> a;
          if (a == "cd"){
               cin >> a;
               int start = 0;
               if (a.length() == 0) continue;
               if (a[0] == '/') {
                    start ++;
                    idx = 0;
               }
               for (int i=start;i<a.length();i++){
                    string word = "";
                    for (int j=i;j<a.length();j++){
                         if (j == a.length()-1){
                              word = word + a[j];
                              i = j;
                              break;
                         }
                         if (a[j] == '/' ) {
                              i = j;
                              break;
                         }
                         word = word + a[j];
                    }
                    // cout << "word :" << word << endl;
                    if (word == ".." ){
                         if (idx != 0) idx--;
                    }else{
                         s[idx++] = word;
                    }
               }
          }else{
               cout << "/";
               for (int i=0;i<idx;i++){
                    cout << s[i] << "/";
               }
               cout << "\n";
          }
     }


     return 0;

}
