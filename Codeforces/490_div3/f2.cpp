#include<iostream>
#include<vector>
using namespace std;
int main (){
     int tc,k1,k2,c,n,m;
     cin >> tc;
     while (tc--){
          cin >> k1 >> k2 >> c;
          cin >> n >> m;
          vector<int> s1(n);
          vector<int> s2(m);
          for (int i=0;i<n;i++){
               cin >> s1[i];
          }
          for (int i=0;i<m;i++){
               cin >> s2[i];
          }
          sort(s1.begin(),s1.end());
          sort(s2.begin(),s2.end());
          while (c > 0){
               
          }
     }

}
