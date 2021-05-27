#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main(){
     int tc;
     scanf("%d\n", &tc);
     while (tc--){
          int n;string tmp;
          scanf("%d", &n);
          map<string, vector<int> > m;
          vector<string> word;
          for (int i=0;i<n;i++){
               cin >> tmp;
               word.push_back(tmp);
               sort(tmp.begin(), tmp.end());
               if (m.find(tmp) == m.end()){
                    m[tmp] = vector<int>();
                    m[tmp].push_back(i);
               }else{
                    m[tmp].push_back(i);
               }
          }
          while (cin >>tmp){
               if (tmp == "END") break;
               string tmp2 = tmp;
               cout << "Anagrams for: " << tmp2 << endl;
               sort(tmp.begin(), tmp.end());
               if (m.find(tmp) == m.end()){
                    cout << "No anagrams for: " << tmp2 << "\n";
               }else{
                    for (int i=0;i<m[tmp].size();i++){
                         cout << "  " << i +1 <<") " << word[m[tmp][i]] << endl;
                    }
               }
          }
          if (tc!= 0) cout << endl;
     }




     return 0;
}
