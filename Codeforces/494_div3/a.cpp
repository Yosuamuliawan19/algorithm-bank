#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
int main (){
     int n, tmp;
     cin >> n;
     map<int,int> m;
     for (int i=0;i<n;i++){
          cin >> tmp;
          if (m.find(tmp) == m.end()){
               m[tmp] = 1;
          }else{
               m[tmp] ++;
          }
     }
     int cnt = 0;
     for (map<int,int>::iterator it = m.begin(); it != m.end(); it++){
          if (it->second > cnt) cnt = it -> second;
     }
     cout << cnt << endl;



     return 0;
}
