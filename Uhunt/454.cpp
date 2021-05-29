#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
     int tc;
     scanf("%d\n", &tc);
     string tmp;
     while (tc--){
          vector<string> word;
          vector<string> srt;
          while (1){
               getline(cin,tmp);
               if (tmp == "") break;
               word.push_back(tmp);
          }
          sort(word.begin(), word.end());
          int s = word.size();
          for (int i=0;i<s;i++){
               tmp = word[i];
               string now = "";
               for (int i=0;i<tmp.length();i++){
                    if (tmp[i] != ' ') now += tmp[i];
               }
               sort(now.begin(), now.end());
               srt.push_back(now);
          }
          for (int i=0;i<s;i++){
               for (int j=0;j<s;j++){
                    if (i == j || i > j) continue;
                    if (srt[i] == srt[j]){
                         cout << word[i] << " = "  << word[j] << endl;
                    }
               }
          }
          if (tc != 0 ) cout << endl;

     }
}
