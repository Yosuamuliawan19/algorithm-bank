#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;
int main (){
     int tc, v, e, tmp1, tmp2;
     cin >> tc;
     while (tc--){
          cin >> v >> e;
          vector<vector<long long> > adjList(v, vector<long long>());
          vector<bool> isRoot(v,true);
          for (int i=0;i<e;i++){
               cin >> tmp1 >> tmp2;
               adjList[tmp1].push_back(tmp2);
               adjList[tmp2].push_back(tmp1);
               isRoot[tmp1] = false;
          }
          long long tot = 0;
          bool flag = true;
          for (int i=0;i<v;i++){
               if (isRoot[i]){
                    vector<long long> cost(v,LLONG_MAX);
                    queue<long long> q;
                    q.push(i);
                    cost[i] = 0;
                    long long cnt1 = 0, cnt2 = 0;
                    while (!q.empty()){
                         long long cur = q.front();q.pop();
                         if (cur % 2 == 0) cnt1 ++ ;
                         else cnt2 ++ ;
                         isRoot[cur] = false;
                         for (long long j=0;j<adjList[cur].size();j++){
                              long long pro = adjList[cur][j];
                              if (cost[pro] == LLONG_MAX){
                                   cost[pro] = cost[cur] + 1;
                                   q.push(pro);
                              }else if (cost[pro] % 2 == cost[cur] % 2){
                                   flag = false;
                              }
                         }
                    }
                    if (cnt2 == 0){
                         tot += cnt1;
                    }else if (cnt1 == 0){
                         tot += cnt2;
                    }else{
                         tot += min(cnt1, cnt2);
                    }

               }
          }
          if (!flag){
               cout << "-1\n";
          }else{
               cout << tot << endl;
          }
     }



     return 0;
}
