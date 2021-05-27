#include<iostream>
#include<vector>
#include<map>
using namespace std;
string s;
void swap(int i, int j){
     char a = s[i];
     s[i] = s[j];
     s[j] = a;
}
int main (){
     cin >> s;
     int t=0;
     while(t <100){
          t++;
     for (int i=0;i<s.length()-1;i++){
          if (s[i] == '1' && s[i+1] == '0'){
               int idx = i+1;
               while (idx < s.length()){
                    if (s[idx] == '0') idx++;
                    else break;
               }
               swap(i,idx-1);
          }else if (s[i] == '2' && s[i+1] == '1'){
               int idx = i+1;
               while (idx < s.length()){
                    if (s[idx] == '1') idx++;
                    else break;
               }
               swap(i,idx-1);
          }
     }
     for (int i=s.length()-1;i>0;i--){
          if (s[i-1] == '1' && s[i] == '0'){
               int idx = i-1  ;
               while (idx >= 0){
                    if (s[idx] == '1') idx--;
                    else break;
               }
               swap(i,idx+1);
          }else if (s[i-1] == '2' && s[i] == '1'){
               int idx = i-1  ;
               while (idx >= 0){
                    if (s[idx] == '2') idx--;
                    else break;
               }
               swap(i,idx+1);
          }
     }
}
     cout << s << endl;



     return 0;
}
