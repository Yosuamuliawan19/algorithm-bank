#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
typedef long long ll;
int main (){
     int n;
     cin >>  n;
     int cur = 0, prev = 0;
     vector<int> ans;


     while (n--){
          cin >> cur;
          if (cur > prev){
               prev = cur;
          }else{
               ans.push_back(prev);
               prev = cur;
          }
     }
     ans.push_back(cur);


     cout << ans.size() << endl;
     for (int i=0;i<ans.size();i++){
          cout << ans[i] << " ";
     }
     cout << "\n";


     return 0;
}
