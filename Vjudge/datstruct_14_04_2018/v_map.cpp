#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main (){
     char n;
     map <string, int> m;
     vector<string> v;
     string prev = "";
     while (scanf("%c", &n) == 1){
          //cout << n;

          if ( ( n < 97 || n > 122 ) &&
               ( n < 65 || n > 90) ){
               //cout << "asdasd\n";
               if (prev != ""){
                    if (m.find(prev) == m.end()){
                         m[prev] = 1;
                         v.push_back(prev);
                    }
                    prev = "";
               }else{
                    continue;
               }
          }else{
               prev += tolower(n);
          }

     }
     sort(v.begin(), v.end());
     for (int i=0;i<v.size();i++){
          cout << v[i] << "\n";
     }



}
