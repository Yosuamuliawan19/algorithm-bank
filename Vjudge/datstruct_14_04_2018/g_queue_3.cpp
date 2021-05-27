#include<iostream>
#include<string>
using namespace std;

int main(){
     long long n; cin >> n;
     while (n--){
          string s; cin >> s;
          char arr[10001] = {0}; long long idx = 0;
          bool flag = true;
          long long l = s.length();
          if (l % 2 != 0){
               cout << "NO\n";
               continue;
          }
          for (long long i=0;i<l;i++){
               if (s[i] == '{' || s[i] == '[' || s[i] == '(' ){
                    arr[idx] = (char) s[i]; idx ++;
               }else{
                    //cout  << idx << " "<< arr[idx-1] << endl;
                    if (idx != 0){
                         if ((s[i] == '}' && arr[idx-1] == '{') ||
                              (s[i] == ')' && arr[idx-1] == '(') ||
                              (s[i] == ']' && arr[idx-1] == '[') ){
                                   idx--;
                         }else{
                              flag = false;
                              break;
                         }
                    }else{
                         flag = false;
                         break;
                    }
               }
          }
          if (flag && idx == 0){
               cout << "YES\n";
          }else{
               cout << "NO\n";
          }

     }


}
