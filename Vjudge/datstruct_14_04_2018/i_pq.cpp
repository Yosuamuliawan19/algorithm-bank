#include<iostream>
#include<queue>

using namespace std;
int main (){
     int tc; cin >> tc;
     while (tc--){
          int n , m ; cin >> n >> m;
          priority_queue < pair <int , int > > pq;
          int temp;
          for (int i=0;i<n;i++){
               cin >> temp;
               pq.push(make_pair(temp,i));
          }
          for (int i=0;i<n;i++){
               // cout << pq.top().second << endl;
               if (pq.top().second == m){
                    cout << i +1 << endl;
                    break;
               }
               pq.pop();
          }
     }


}
