#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
bool isP[1000010];
vector<int> pList;
void sieve(){
     int sq = sqrt(1000010);
     for (int i=0;i<=sq;i++) isP[i] = 0;
     for (int i=2;i<=sq;i++){
          if (!isP[i]){
               for (int j=i*i;j<=sq;j+=i){
                    isP[j] = true;
               }
               pList.push_back(i);
          }
     }
}
int main (){
     sieve();
     int tc, n;
     cin >> tc;
     while (tc--){
          cin >> n;
          vector<int> monster(n);
          for (int i=0;i<n;i++){
               cin >> monster[i];
          }
          for (int i= )
     }


     return 0;
}
