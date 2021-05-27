#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>


typedef long long ll;
using namespace std;
int main(){
     int n, k;
     cin >> n >> k;

     int tmp, cnt = 0;
     bool putS = false;
     stack<int> s;

     for (int i=0;i<n;i++){
          cin >> tmp;
          // cout << tmp << endl;
          if (tmp > k) putS = true;
          if (putS){
               // cout << "^ stack\n";
               s.push(tmp);
          }else{
               cnt++;
          }
     }
     while (!s.empty() && s.top() <= k){
          cnt ++;
          s.pop();
     }
     cout << cnt << endl;


     return 0;
}
