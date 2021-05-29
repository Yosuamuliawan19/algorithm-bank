#include<map>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int main (){
     string s;
     map<string,int> cnt;
     string word[1000];
     string srt[1000];
     int idx = 0;
     while (cin >> s){
          if (s == "#") break;
          string t = s;
          for (int i=0;i<t.length();i++){
               if (t[i] >= 'a'){
                    t[i] = t[i] - 32;
               }
          }
          sort(t.begin(),t.end());
          cnt[t]++;
          word[idx] = s;
          srt[idx] = t;
          idx++;
     }
     vector<string> ans;
     for (int i=0;i<idx;i++){
          if (cnt[srt[i]] == 1){
               ans.push_back(word[i]);
          }
     }
     sort(ans.begin(), ans.end());
     for (int i=0;i<ans.size();i++){
          cout << ans[i] << endl;
     }




     return 0;
}
