#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(string a, string b){
     return a.length() < b.length();
}

int main (){
     int n;
     cin >> n;
     vector<string> s;
     string tmp;
     for (int i=0;i<n;i++){
          cin >> tmp;
          s.push_back(tmp);
     }
     sort(s.begin(),s.end(), cmp);
     for (int i=0;i<n;i++){
          cout << s[i] << endl;
     }
     for (int i=0;i<n-1;i++){
          int len = s[i].length(), cur = 0;
          bool flag = false;
          int keep = 0;
          cout << "hey \n" ;
          for (int j=0;j<s[i+1].length();j++){
               if (s[i][cur] == s[i+1][j]){
                    if (cur == 0) keep = j;
                    cur ++;
               }else{
                    // cout << "Mismatch in string " << s[i] << " " << s[i][cur] << " " << s[i+1][j] <<endl;
                    // cout << "cur = " << keep << endl;
                    cur = 0;
                    j = keep;
               }
               if (cur == len){
                    flag = true;
                    break;
               }
          }
          if (!flag){
               cout << "NO\n";
               return 0;
          }
     }
     cout <<  "YES\n";
     for (int i=0;i<n;i++){
          cout << s[i] << endl;
     }
     return 0;
}
