#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
int main (){
     int n;
     map <int, int> m;
     vector <int> v;
     while (scanf("%d", &n) == 1){
          if (n == 123) break;
          if (m.find(n) != m.end()) m[n] ++;
          else {
               m[n] = 1;
               v.push_back(n);
          }
     }
     for(int i=0;i<v.size();i++){
          printf("%d %d\n" , v[i], m[v[i]]);
     }





}
