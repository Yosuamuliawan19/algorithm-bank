#include<iostream>
#include<vector>
#include<map>

using namespace std;
int main (){
     int n, k, dis = 0, tmp;
     map<int,bool> m;
     vector<int> res;
     cin >> n >> k;
     for (int i=0;i<n;i++){
          cin >> tmp;
          if (m.find(tmp) == m.end()){
               m[tmp]  = true;
               dis ++;
               res.push_back(i+1);
          }
     }
     if (dis >= k){
          cout << "YES\n";
          for (int i=0;i<k;i++){
               cout << res[i] << " ";
          }
          cout << endl;
     }else{
          cout << "NO\n";
     }


     return 0;
}
