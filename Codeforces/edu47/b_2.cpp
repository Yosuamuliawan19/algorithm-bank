#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main (){
     string s;
     cin >> s;
     int a =0, b=0;
     vector<int> lis;
     bool f = 0;
     for (int i=0;i<s.length();i++){
          if (s[i] == '2'){
               f = 1;
               lis.push_back(2);
          }else if (s[i] == '1'){
               a++;
          }else if (!f && s[i] == '0'){
               b++;
          }else if (f && s[i] == '0'){
               lis.push_back(0);
         }
     }
     while (b--) cout << "0";
     while (a--) cout << "1";
     for (int i=0;i<lis.size();i++){
          cout << lis[i];
     }
     cout << endl;



     return 0;
}
