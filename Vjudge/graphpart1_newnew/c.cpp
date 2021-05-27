#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
int main (){
     int n, e;
     while (cin >> n >> e){
          vector<vector<int> > adjList(n, vector<int>());
          int a , b;
          for (int i=0;i<e;i++){
               cin >> a >> b;
               adjList[a].push_back(b);
               adjList[b].push_back(a);
          }
          vector<int> cost(n, INT_MAX);
          queue<int> q;
          q.push(0);
          bool flag = true;
          while (!q.empty()){
               int cur = q.front();q.pop();
               for (int i=0;i<adjList[cur].size();i++){
                    int a = adjList[cur][i];
                    if (cost[a] == INT_MAX){ n
                         cost[a] = cost[cur] +1;
                         q.push(a);
                    }else if ((cost[a] % 2) == (cost[cur] % 2)){
                         flag = false;
                         break;
                    }
               }
               if (!flag) break;
          }
          if (flag){
               cout << "BICOLORABLE.\n";
          }else{
               cout << "NOT BICOLORABLE.\n";
          }
     }


     return 0;
}
