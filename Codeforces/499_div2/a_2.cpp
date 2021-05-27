#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>

using namespace std;
typedef long long ll;
int n, k;
string s;
int main (){
     cin >> n >> k >> s;
     sort(s.begin(),s.end());
     int tot = 0, len = 0, prev = 'a'-2;
     for (int i=0;i<n;i++){
          if (s[i] > prev + 1){
               tot += (s[i]-'a'+1);
               len ++;
               prev = s[i];
               if (len >= k){
                    cout << tot << endl;
                    return 0;
               }
          }
     }
     cout << -1 << endl;


     return 0;
}
