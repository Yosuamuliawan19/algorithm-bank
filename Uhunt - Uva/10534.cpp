#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
vector<int> arr(10010), n;
void lis(){
     vector<int> d;
     int len = 1;
     d.pb(arr[0]);
     for (int i=1;i<n;i++){
          vector<int>::iterator pos = upper_bound(arr.begin(), arr.end(), arr[i]);
          cout << *pos  << " " << arr[i] << endl;
     }
     // for (auto it: d){
     //      cout << it << endl;
     // }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     while (cin >> n){
          for (int i=0;i<n;i++) cin >> arr[i];
          lis();
     }

     return 0;
}
