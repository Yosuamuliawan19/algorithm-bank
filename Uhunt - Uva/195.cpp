#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
bool comp(char a, char b){
     char c = a < 97 ? a+32:a, d = b <97? b+32:b;
     if (c == d){
          return a < b;
     }else{
          return c < d;
     }
}
void gen(string tmp, vector<bool> flags, string cur){
     if (cur.length() == tmp.length() ){
          cout << cur << endl;
     }
     map<string, bool> mp;
     for (int i=0;i<tmp.length();i++){
          if (flags[i] == 1) continue;
          string now = cur + tmp[i];
          if (mp.find(now) == mp.end()){
               flags[i] = 1;
               mp[now] = 1;
               gen(tmp, flags, now);
               flags[i] = 0;
          }

     }
}
int main (){
     int tc;
     string tmp;
     cin >> tc;
     while (tc--){
          cin >> tmp;
          sort(tmp.begin(), tmp.end(), comp);
          gen(tmp, vector<bool>(tmp.length(), 0), "");
     }
     return 0;
}
