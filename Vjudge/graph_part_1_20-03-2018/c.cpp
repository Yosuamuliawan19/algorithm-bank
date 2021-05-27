#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int main(){

     int n , l;
     while (cin >> n){
          vector <vector <int> > adjList;
          adjList.clear();
          if (n == 0 ) break;
          cin >> l;
          for (int i=0;i<n;i++){
               adjList.push_back(vector<int>() );
          }
          int a , b ;
          for (int i=0;i<l;i++){
               cin >> a >> b;
               adjList[a].push_back(b);
               adjList[b].push_back(a);
          }
          int cost[201] = {0};
          queue<int> q;
          bool flag = true;
          q.push(0);
          while (!q.empty()){
               int cur = q.front();q.pop();
               // cout << " cur " << cur <<endl;
               for (int i=0;i<adjList[cur].size();i++){
                    int check = adjList[cur][i];
                    if (cost[check] == 0){
                         q.push(check);
                         cost[check] = cost[cur] + 1;
                    }else if ( (cost[check] % 2) == (cost[cur] % 2) ){
                         flag = false;
                         break;
                    }
               }
          }
          if (flag){
               cout << "BICOLORABLE.\n";
          }else{
               cout << "NOT BICOLORABLE.\n";
          }

     }
}
