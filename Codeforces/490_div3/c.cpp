#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>

typedef long long ll;
using namespace std;
int main (){
     int n, k;
     string s;
     vector<queue<int> > arr(26, queue<int>());
     map<int,bool> idx;

     cin >> n >> k >> s;
     for (int i=0;i<n;i++){
          arr[s[i]-97].push(i);
     }

     int cnt = 0;
     for (int i=0;i<k;i++){
          while ( arr[cnt].empty() ) cnt++;
          idx[arr[cnt].front()] = true;
          arr[cnt].pop();
     }

     for (int i=0;i<n;i++){
          if (idx.find(i) == idx.end()){
               cout << s[i];
          }
     }
     cout << "\n";

     return 0;
}
