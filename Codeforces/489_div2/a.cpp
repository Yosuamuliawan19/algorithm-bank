#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<map>

typedef long long ll;
using namespace std;
int n, tmp;
int cnt = 0;
map<int, bool> m;
int main (){
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> tmp;
          m[tmp] = true;
     }
     for (map<int,bool>::iterator it=m.begin(); it != m.end(); ++it){
          if (it->first != 0 ) cnt ++;
     }
     cout << cnt << endl;

     return 0;
}
