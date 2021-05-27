#include<vector>
#include<map>
#include<cmath>
#include<iostream>

using namespace std;
int main (){
     int n, cur;
     cin >> n;
     vector<int> twos;
     map<int,int> m;
     vector<int> v;
     while (n--){
          cin >> cur;
          m[cur] ++;
          v.push_back(cur);
     }
     for (int i=0;i<100;i++){
          twos.push_back(pow(2,i));
     }
     int cnt =0;
     for (int i=0;i<v.size();i++){
          bool flag = false;
          for (int j=0;j<100;j++){
               int a = twos[j] - v[i];
               if (m.find(a) != m.end()){
                    if (m[a] == 1 && a == v[i]) continue;
                    else{
                         // cout << i << " " << v[i] << " match " << a << endl;
                         flag = true;
                         break;
                    }
               }else{
                    continue;
               }
          }
          if (!flag){
               cnt++;
          }

     }
     cout << cnt << endl;


}
