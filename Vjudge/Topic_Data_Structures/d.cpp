#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
     ios_base::sync_with_stdio;
     cin.tie(NULL);
     ll n;

     while (cin >> n){
          if (n == 0) break;
          deque<ll> dq;
          for (int i=1;i<n+1;i++) dq.push_back(i);
          cout << "Discarded cards:";
          bool f = 0;
          while (dq.size() > 1){
               if (!f) cout << " ";
               f = 1;
               cout << dq.front();


               dq.pop_front();
               if (dq.size() == 1){
                    break;
               }
               cout << ", " ;
               dq.push_back(dq.front());
               dq.pop_front();
          }

          cout << "\nRemaining card: " << dq.front() << "\n";


     }

     return 0;
}
